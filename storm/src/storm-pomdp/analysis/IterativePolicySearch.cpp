#include "storm-pomdp/analysis/IterativePolicySearch.h"
#include "storm/io/file.h"
#include "storm-pomdp-cli/settings/modules/QualitativePOMDPAnalysisSettings.h"
#include "storm-pomdp/analysis/OneShotPolicySearch.h"
#include "storm-pomdp/analysis/QualitativeAnalysis.h"
#include "storm-pomdp/analysis/QualitativeAnalysisOnGraphs.h"

namespace storm::pomdp {
namespace detail {
void printRelevantInfoFromModel(std::shared_ptr<storm::solver::SmtSolver::ModelReference> const& model,
                                std::vector<storm::expressions::Variable> const& reachVars, std::vector<storm::expressions::Variable> const& continuationVars) {
    uint64_t i = 0;
    std::stringstream ss;
    STORM_LOG_DEBUG("states which we have now: ");
    for (auto const& rv : reachVars) {
        if (model->getBooleanValue(rv)) {
            ss << " " << i;
        }
        ++i;
    }
    STORM_LOG_DEBUG(ss.str());
    i = 0;
    STORM_LOG_DEBUG("states from which we continue: ");
    std::stringstream ss2;
    for (auto const& rv : continuationVars) {
        if (model->getBooleanValue(rv)) {
            ss2 << " " << i;
        }
        ++i;
    }
    STORM_LOG_DEBUG(ss2.str());
}
}  // namespace detail

template<typename ValueType>
void IterativePolicySearch<ValueType>::Statistics::print() const {
    STORM_PRINT_AND_LOG("#STATS Total time: " << totalTimer << '\n');
    STORM_PRINT_AND_LOG("#STATS SAT Calls: " << satCalls << '\n');
    STORM_PRINT_AND_LOG("#STATS SAT Calls time: " << smtCheckTimer << '\n');
    STORM_PRINT_AND_LOG("#STATS Outer iterations: " << outerIterations << '\n');
    STORM_PRINT_AND_LOG("#STATS Solver initialization time: " << initializeSolverTimer << '\n');
    STORM_PRINT_AND_LOG("#STATS Obtain partial scheduler time: " << evaluateExtensionSolverTime << '\n');
    STORM_PRINT_AND_LOG("#STATS Update solver to extend partial scheduler time: " << encodeExtensionSolverTime << '\n');
    STORM_PRINT_AND_LOG("#STATS Update solver with new scheduler time: " << updateNewStrategySolverTime << '\n');
    STORM_PRINT_AND_LOG("#STATS Winning regions update time: " << winningRegionUpdatesTimer << '\n');
    STORM_PRINT_AND_LOG("#STATS Graph search time: " << graphSearchTime << '\n');
}

template<typename ValueType>
IterativePolicySearch<ValueType>::IterativePolicySearch(storm::models::sparse::Pomdp<ValueType> const& pomdp, storm::storage::BitVector const& targetStates,
                                                        storm::storage::BitVector const& surelyReachSinkStates,
                                                        std::shared_ptr<storm::utility::solver::SmtSolverFactory>& smtSolverFactory,
                                                        MemlessSearchOptions const& options)
    : pomdp(pomdp), surelyReachSinkStates(surelyReachSinkStates), targetStates(targetStates), options(options), smtSolverFactory(smtSolverFactory) {
    this->expressionManager = std::make_shared<storm::expressions::ExpressionManager>();
    smtSolver = smtSolverFactory->create(*expressionManager);
    // Initialize states per observation.
    for (uint64_t obs = 0; obs < pomdp.getNrObservations(); ++obs) {
        statesPerObservation.emplace_back();  // TODO Consider using bitvectors instead.
        reachVarExpressionsPerObservation.emplace_back();
    }
    uint64_t state = 0;
    for (auto obs : pomdp.getObservations()) {
        statesPerObservation.at(obs).push_back(state++);
    }
    // Initialize winning region
    std::vector<uint64_t> nrStatesPerObservation;
    for (auto const& states : statesPerObservation) {
        nrStatesPerObservation.push_back(states.size());
    }
    winningRegion = WinningRegion(nrStatesPerObservation);
    if (options.validateResult || options.validateEveryStep) {
        STORM_LOG_WARN("The validator should only be created when the option is set.");
        validator = std::make_shared<WinningRegionQueryInterface<ValueType>>(pomdp, winningRegion);
    }
}

template<typename ValueType>
bool IterativePolicySearch<ValueType>::initialize(uint64_t k) {
    STORM_LOG_INFO("Start intializing solver...");
    bool delayedSwitching = false;  // Notice that delayed switching is currently not compatible with some of the other optimizations and it is unclear which of
                                    // these optimizations causes the problem.
    bool lookaheadConstraintsRequired;
    if (options.forceLookahead) {
        lookaheadConstraintsRequired = true;
    } else {
        lookaheadConstraintsRequired = qualitative::isLookaheadRequired(pomdp, targetStates, surelyReachSinkStates);
    }
    if (options.pathVariableType == MemlessSearchPathVariables::RealRanking) {
        k = 10;  // magic constant, consider moving.
    }

    if (actionSelectionVars.empty()) {
        for (uint64_t obs = 0; obs < pomdp.getNrObservations(); ++obs) {
            actionSelectionVars.push_back(std::vector<storm::expressions::Variable>());
            actionSelectionVarExpressions.push_back(std::vector<storm::expressions::Expression>());
        }
        for (uint64_t stateId = 0; stateId < pomdp.getNumberOfStates(); ++stateId) {
            reachVars.push_back(expressionManager->declareBooleanVariable("C-" + std::to_string(stateId)));
            reachVarExpressions.push_back(reachVars.back().getExpression());
            reachVarExpressionsPerObservation[pomdp.getObservation(stateId)].push_back(reachVarExpressions.back());
            continuationVars.push_back(expressionManager->declareBooleanVariable("D-" + std::to_string(stateId)));
            continuationVarExpressions.push_back(continuationVars.back().getExpression());
        }
        // Create the action selection variables.
        uint64_t obs = 0;
        for (auto const& statesForObservation : statesPerObservation) {
            for (uint64_t a = 0; a < pomdp.getNumberOfChoices(statesForObservation.front()); ++a) {
                std::string varName = "A-" + std::to_string(obs) + "-" + std::to_string(a);
                actionSelectionVars.at(obs).push_back(expressionManager->declareBooleanVariable(varName));
                actionSelectionVarExpressions.at(obs).push_back(actionSelectionVars.at(obs).back().getExpression());
            }
            schedulerVariables.push_back(expressionManager->declareBitVectorVariable("scheduler-obs-" + std::to_string(obs), statesPerObservation.size()));
            schedulerVariableExpressions.push_back(schedulerVariables.back());
            switchVars.push_back(expressionManager->declareBooleanVariable("S-" + std::to_string(obs)));
            switchVarExpressions.push_back(switchVars.back().getExpression());
            observationUpdatedVariables.push_back(expressionManager->declareBooleanVariable("U-" + std::to_string(obs)));
            observationUpdatedExpressions.push_back(observationUpdatedVariables.back().getExpression());
            followVars.push_back(expressionManager->declareBooleanVariable("F-" + std::to_string(obs)));
            followVarExpressions.push_back(followVars.back().getExpression());

            ++obs;
        }

        for (uint64_t stateId = 0; stateId < pomdp.getNumberOfStates(); ++stateId) {
            pathVars.push_back(std::vector<storm::expressions::Variable>());
            pathVarExpressions.push_back(std::vector<storm::expressions::Expression>());
        }
    }

    uint64_t initK = 0;
    if (maxK != std::numeric_limits<uint64_t>::max()) {
        initK = maxK;
    }
    if (initK < k) {
        for (uint64_t stateId = 0; stateId < pomdp.getNumberOfStates(); ++stateId) {
            if (lookaheadConstraintsRequired) {
                if (options.pathVariableType == MemlessSearchPathVariables::BooleanRanking) {
                    for (uint64_t i = initK; i < k; ++i) {
                        pathVars[stateId].push_back(expressionManager->declareBooleanVariable("P-" + std::to_string(stateId) + "-" + std::to_string(i)));
                        pathVarExpressions[stateId].push_back(pathVars[stateId].back().getExpression());
                    }
                } else if (options.pathVariableType == MemlessSearchPathVariables::IntegerRanking) {
                    pathVars[stateId].push_back(expressionManager->declareIntegerVariable("P-" + std::to_string(stateId)));
                    pathVarExpressions[stateId].push_back(pathVars[stateId].back().getExpression());
                } else {
                    assert(options.pathVariableType == MemlessSearchPathVariables::RealRanking);
                    pathVars[stateId].push_back(expressionManager->declareRationalVariable("P-" + std::to_string(stateId)));
                    pathVarExpressions[stateId].push_back(pathVars[stateId].back().getExpression());
                }
            }
        }
    }

    assert(!lookaheadConstraintsRequired || pathVarExpressions.size() == pomdp.getNumberOfStates());
    assert(reachVars.size() == pomdp.getNumberOfStates());
    assert(reachVarExpressions.size() == pomdp.getNumberOfStates());

    uint64_t obs = 0;

    for (auto const& statesForObservation : statesPerObservation) {
        if (pomdp.getNumberOfChoices(statesForObservation.front()) == 1) {
            ++obs;
            continue;
        }
        if (options.onlyDeterministicStrategies || statesForObservation.size() == 1) {
            for (uint64_t a = 0; a < pomdp.getNumberOfChoices(statesForObservation.front()) - 1; ++a) {
                for (uint64_t b = a + 1; b < pomdp.getNumberOfChoices(statesForObservation.front()); ++b) {
                    smtSolver->add(!(actionSelectionVarExpressions[obs][a]) || !(actionSelectionVarExpressions[obs][b]));
                    // in case of deterministic strategies: if a is selected, b is not selected
                }
            }
        }
        ++obs;
    }

    obs = 0;
    for (auto const& actionVars : actionSelectionVarExpressions) {
        std::vector<storm::expressions::Expression> actExprs = actionVars;
        actExprs.push_back(followVarExpressions[obs]);
        smtSolver->add(storm::expressions::disjunction(actExprs));  // at least one action is selected (2b)
        for (auto const& av : actionVars) {
            smtSolver->add(!followVarExpressions[obs] || !av); // if follow is selected, no action is selected
        }
        ++obs;
    }

    // Update at least one observation.
    // PAPER COMMENT: 2
    smtSolver->add(storm::expressions::disjunction(observationUpdatedExpressions)); // at least one observation is updated (6a)

    // PAPER COMMENT: 3
    if (lookaheadConstraintsRequired) {
        if (options.pathVariableType == MemlessSearchPathVariables::BooleanRanking) {
            for (uint64_t state = 0; state < pomdp.getNumberOfStates(); ++state) {
                if (targetStates.get(state)) {
                    smtSolver->add(pathVarExpressions[state][0]); // target states are reached in 0 steps
                } else {
                    smtSolver->add(!pathVarExpressions[state][0] || followVarExpressions[pomdp.getObservation(state)]); // from non-target states, either you need to follow a memoryless strategy for multiple steps or you need to switch(?)
                }
            }
        } else {
            for (uint64_t state = 0; state < pomdp.getNumberOfStates(); ++state) {
                smtSolver->add(pathVarExpressions[state][0] <= expressionManager->integer(k));
                smtSolver->add(pathVarExpressions[state][0] >= expressionManager->integer(0)); // path length is between 0 and k
            }
        }
    }

    uint64_t rowindex = 0;
    for (uint64_t state = 0; state < pomdp.getNumberOfStates(); ++state) {
        if (targetStates.get(state) || surelyReachSinkStates.get(state)) {
            rowindex += pomdp.getNumberOfChoices(state);
            continue;
        }
        for (uint64_t action = 0; action < pomdp.getNumberOfChoices(state); ++action) {
            std::vector<storm::expressions::Expression> subexprreachSwitch; // formula 10?
            std::vector<storm::expressions::Expression> subexprreachNoSwitch; // formula 9?

            subexprreachSwitch.push_back(!reachVarExpressions[state]);
            subexprreachSwitch.push_back(!actionSelectionVarExpressions[pomdp.getObservation(state)][action]);
            subexprreachSwitch.push_back(!switchVarExpressions[pomdp.getObservation(state)]);
            subexprreachSwitch.push_back(followVarExpressions[pomdp.getObservation(state)]);

            subexprreachNoSwitch.push_back(!reachVarExpressions[state]);
            subexprreachNoSwitch.push_back(!actionSelectionVarExpressions[pomdp.getObservation(state)][action]);
            subexprreachNoSwitch.push_back(switchVarExpressions[pomdp.getObservation(state)]);
            subexprreachNoSwitch.push_back(followVarExpressions[pomdp.getObservation(state)]);

            for (auto const& entries : pomdp.getTransitionMatrix().getRow(rowindex)) {
                if (!delayedSwitching || pomdp.getObservation(entries.getColumn()) != pomdp.getObservation(state)) { // delayed switching or next observation is different from current observation
                    subexprreachSwitch.push_back(continuationVarExpressions.at(entries.getColumn()));
                } else {
                    // TODO: This could be the spot where delayed switching is broken.
                    subexprreachSwitch.push_back(reachVarExpressions.at(entries.getColumn()));
                    subexprreachSwitch.push_back(continuationVarExpressions.at(entries.getColumn()));
                }
                smtSolver->add(storm::expressions::disjunction(subexprreachSwitch));
                subexprreachSwitch.pop_back();
                subexprreachNoSwitch.push_back(reachVarExpressions.at(entries.getColumn()));
                smtSolver->add(storm::expressions::disjunction(subexprreachNoSwitch));
                subexprreachNoSwitch.pop_back();
            }
            rowindex++;
        }
    }

    rowindex = 0;
    for (uint64_t state = 0; state < pomdp.getNumberOfStates(); ++state) {
        if (surelyReachSinkStates.get(state)) {
            smtSolver->add(!reachVarExpressions[state]); // avoid states are not reached
            smtSolver->add(!continuationVarExpressions[state]); // no shortcuts from avoid states
            if (lookaheadConstraintsRequired) {
                if (options.pathVariableType == MemlessSearchPathVariables::BooleanRanking) {
                    for (uint64_t j = 1; j < k; ++j) {
                        smtSolver->add(!pathVarExpressions[state][j]); // there is no path from avoid to reach states
                    }
                } else {
                    smtSolver->add(pathVarExpressions[state][0] == expressionManager->integer(k));
                }
            }
            rowindex += pomdp.getNumberOfChoices(state);
        } else if (!targetStates.get(state)) { // non-target states: S_?
            if (lookaheadConstraintsRequired) {
                if (options.pathVariableType == MemlessSearchPathVariables::BooleanRanking) {
                    smtSolver->add(storm::expressions::implies(reachVarExpressions.at(state), pathVarExpressions.at(state).back())); // if state is reached, then it is reached in k steps
                    std::vector<std::vector<std::vector<storm::expressions::Expression>>> pathsubsubexprs;
                    for (uint64_t j = 1; j < k; ++j) {
                        pathsubsubexprs.push_back(std::vector<std::vector<storm::expressions::Expression>>());
                        for (uint64_t action = 0; action < pomdp.getNumberOfChoices(state); ++action) {
                            pathsubsubexprs.back().push_back(std::vector<storm::expressions::Expression>());
                        }
                    }

                    for (uint64_t action = 0; action < pomdp.getNumberOfChoices(state); ++action) {
                        std::vector<storm::expressions::Expression> subexprreach;
                        for (auto const& entries : pomdp.getTransitionMatrix().getRow(rowindex)) {
                            for (uint64_t j = 1; j < k; ++j) {
                                pathsubsubexprs[j - 1][action].push_back(pathVarExpressions[entries.getColumn()][j - 1]);
                            }
                        }
                        rowindex++;
                    }

                    for (uint64_t j = 1; j < k; ++j) {
                        std::vector<storm::expressions::Expression> pathsubexprs;
                        for (uint64_t action = 0; action < pomdp.getNumberOfChoices(state); ++action) {
                            pathsubexprs.push_back(actionSelectionVarExpressions.at(pomdp.getObservation(state)).at(action) &&
                                                   storm::expressions::disjunction(pathsubsubexprs[j - 1][action]));
                        }
                        if (!delayedSwitching) {
                            pathsubexprs.push_back(switchVarExpressions.at(pomdp.getObservation(state)));
                            pathsubexprs.push_back(followVarExpressions[pomdp.getObservation(state)]);
                        }
                        smtSolver->add(storm::expressions::iff(pathVarExpressions[state][j], storm::expressions::disjunction(pathsubexprs)));
                    }
                } else {
                    std::vector<storm::expressions::Expression> actPathDisjunction;
                    for (uint64_t action = 0; action < pomdp.getNumberOfChoices(state); ++action) {
                        std::vector<storm::expressions::Expression> pathDisjunction;
                        for (auto const& entries : pomdp.getTransitionMatrix().getRow(rowindex)) {
                            pathDisjunction.push_back(pathVarExpressions[entries.getColumn()][0] < pathVarExpressions[state][0]);
                        }
                        actPathDisjunction.push_back(storm::expressions::disjunction(pathDisjunction) &&
                                                     actionSelectionVarExpressions.at(pomdp.getObservation(state)).at(action));
                        rowindex++;
                    }
                    if (!delayedSwitching) {
                        actPathDisjunction.push_back(switchVarExpressions.at(pomdp.getObservation(state)));
                        actPathDisjunction.push_back(followVarExpressions[pomdp.getObservation(state)]);
                    }
                    actPathDisjunction.push_back(!reachVarExpressions[state]);
                    smtSolver->add(storm::expressions::disjunction(actPathDisjunction));
                }
            }
        } else {
            if (lookaheadConstraintsRequired) {
                if (options.pathVariableType == MemlessSearchPathVariables::BooleanRanking) {
                    for (uint64_t j = 1; j < k; ++j) {
                        smtSolver->add(pathVarExpressions[state][j]);
                    }
                } else {
                    smtSolver->add(pathVarExpressions[state][0] == expressionManager->integer(0));
                }
            }
            smtSolver->add(reachVars[state]);
            rowindex += pomdp.getNumberOfChoices(state);
        }
    }

    obs = 0;
    for (auto const& statesForObservation : statesPerObservation) {
        for (auto const& state : statesForObservation) {
            if (!targetStates.get(state)) {
                smtSolver->add(!continuationVars[state] || schedulerVariableExpressions[obs] > 0);
                smtSolver->add(!reachVarExpressions[state] || !followVarExpressions[obs] || schedulerVariableExpressions[obs] > 0);
            }
        }
        ++obs;
    }

    for (uint64_t observation = 0; observation < pomdp.getNrObservations(); ++observation) {
        smtSolver->add(
            storm::expressions::implies(switchVarExpressions[observation], storm::expressions::disjunction(reachVarExpressionsPerObservation[observation])));
    }
    return lookaheadConstraintsRequired;
}

template<typename ValueType>
uint64_t IterativePolicySearch<ValueType>::getOffsetFromObservation(uint64_t state, uint64_t observation) const {
    if (!useFindOffset) {
//        STORM_LOG_WARN("This code is slow and should only be used for debugging.");
        useFindOffset = true;
    }
    uint64_t offset = 0;
    for (uint64_t s : statesPerObservation[observation]) {
        if (s == state) {
            return offset;
        }
        ++offset;
    }
    assert(false);  // State should have occured.
    return 0;
}

//template<typename ValueType>
//void IterativePolicySearch<ValueType>::printObservationValuation(uint64_t observation) {
//    auto const& stateValuations = pomdp.getObservationValuations();
//    uint64_t numberOfStates = stateValuations.getNumberOfStates();
//    assert(numberOfStates > 0);
//
//    for (uint64_t stateId = 0; stateId < numberOfStates; ++stateId) {
//        auto const& valuation = stateValuations.getValuation(stateId);
//        size_t numberOfLabels = valuation.observationLabelValues.size();
//        assert(numberOfLabels > 0);
//
//        for (size_t labelIndex = 0; labelIndex < numberOfLabels; ++labelIndex) {
//            std::cout << "State " << stateId << ", Observation Label " << labelIndex << ": "
//                      << valuation.observationLabelValues[labelIndex] << std::endl;
//        }
//    }
//}

template<typename ValueType>
void IterativePolicySearch<ValueType>::printAllValuation() const {
    auto const& stateValuations = pomdp.getObservationValuations();
    uint64_t numberOfStates = stateValuations.getNumberOfStates();
    assert(numberOfStates > 0);

    for (uint64_t stateId = 0; stateId < numberOfStates; ++stateId) {
        auto const& valuationRange = stateValuations.at(stateId);
        STORM_PRINT("State " << stateId << std::endl);
        for (auto it = valuationRange.begin(); it != valuationRange.end(); ++it) {
            if (it.isLabelAssignment()) {
                STORM_PRINT("Observation-label: val - " << it.getLabel() << ": " << it.getLabelValue() << std::endl);
            }
        }
    }

    for (uint64_t stateId = 0; stateId < numberOfStates; ++stateId) {
        auto const& choiceLabelings = pomdp.getChoiceLabeling();
        uint_fast64_t rowcount = pomdp.getNondeterministicChoiceIndices()[stateId + 1] - pomdp.getNondeterministicChoiceIndices()[stateId];
        for (uint_fast64_t i = 0; i < rowcount; ++i) {
            uint_fast64_t rowIndex = pomdp.getNondeterministicChoiceIndices()[stateId] + i;
            auto const& choiceLabeling = choiceLabelings.getLabelsOfChoice(rowIndex);
            std::stringstream ss;
            ss << "State " << stateId << ", Choice " << i << ": ";
            for (auto const& label : choiceLabeling) {
                ss << label << " ";
            }
            ss << std::endl;
            STORM_PRINT(ss.str());
        }
    }
}

template<typename ValueType> std::string IterativePolicySearch<ValueType>::getObservationValuation(uint64_t observation) {
    auto const& obsValuations = pomdp.getObservationValuations();
    return obsValuations.getStateInfo(observation);
}

template<typename ValueType> std::string IterativePolicySearch<ValueType>::getActionLabel(uint64_t observation, uint64_t action_offset) {
    auto stateId = statesPerObservation[observation][0];
    auto const& choiceLabelings = pomdp.getChoiceLabeling();
    uint_fast64_t rowIndex = pomdp.getNondeterministicChoiceIndices()[stateId] + action_offset;
    auto const& choiceLabels = choiceLabelings.getLabelsOfChoice(rowIndex);
    std::stringstream ss;
    for (auto const& label : choiceLabels) {
        ss << label << " ";
    }
    return ss.str();
}


template<typename ValueType>
bool IterativePolicySearch<ValueType>::analyze(uint64_t k, storm::storage::BitVector const& oneOfTheseStates,
                                               storm::storage::BitVector const& allOfTheseStates) {
    STORM_PRINT("Surely reach sink states: " << surelyReachSinkStates);
    STORM_PRINT("Target states " << targetStates);
    STORM_PRINT("Questionmark states " << (~surelyReachSinkStates & ~targetStates));
    stats.initializeSolverTimer.start();
    // TODO: When do we need to reinitialize? When the solver has been reset.
    bool lookaheadConstraintsRequired = initialize(k);
    if (lookaheadConstraintsRequired) {
        maxK = k;
    }

    stats.winningRegionUpdatesTimer.start();
    storm::storage::BitVector updated(pomdp.getNrObservations());
    storm::storage::BitVector potentialWinner(pomdp.getNrObservations());
    storm::storage::BitVector observationsWithPartialWinners(pomdp.getNrObservations());

    // preparation to print explainable strategy
    auto const& obsValuations = pomdp.getObservationValuations(); //
    auto const& choiceLabeling = pomdp.getChoiceLabeling();
    auto const& choiceIndices = pomdp.getNondeterministicChoiceIndices();

    for (uint64_t observation = 0; observation < pomdp.getNrObservations(); ++observation) {
        if (winningRegion.observationIsWinning(observation)) {
            continue;
        }
        bool observationIsWinning = true;
        for (uint64_t state : statesPerObservation[observation]) {
            if (!targetStates.get(state)) {
                observationIsWinning = false;
                observationsWithPartialWinners.set(observation);
            } else {
                potentialWinner.set(observation);
            }
        }
        if (observationIsWinning) {
            auto obsInfo = getObservationValuation(observation);
            STORM_LOG_INFO("Observation " << obsInfo <<  " with Storm internal id = " << observation << " is target.");
            stats.incrementGraphBasedWinningObservations();
            winningRegion.setObservationIsWinning(observation);
            updated.set(observation);
        }
    }
    STORM_PRINT("Graph based winning obs: " << stats.getGraphBasedwinningObservations());
    observationsWithPartialWinners &= potentialWinner;

    // this was commented the initial graph search below

    for (auto const observation : observationsWithPartialWinners) {
        uint64_t nrStatesForObs = statesPerObservation[observation].size();
        storm::storage::BitVector update(nrStatesForObs);
        for (uint64_t i = 0; i < nrStatesForObs; ++i) {
            uint64_t state = statesPerObservation[observation][i];
            if (targetStates.get(state)) {
                update.set(i);
            }
        }
        assert(!update.empty());
        STORM_PRINT("Extend winning region for observation " << observation << " with target states/offsets" << update);
        STORM_LOG_INFO("Extend winning region for observation " << observation << " with target states/offsets" << update);
        winningRegion.addTargetStates(observation, update);
        assert(winningRegion.query(observation, update));  // "Cannot continue: No scheduler known for state " << i << " (observation " << obs << ").");
        updated.set(observation);
    }

#ifndef NDEBUG
    for (auto const& state : targetStates) {
        STORM_LOG_ASSERT(winningRegion.isWinning(pomdp.getObservation(state), getOffsetFromObservation(state, pomdp.getObservation(state))),
                         "Target state " << state << " , observation " << pomdp.getObservation(state) << " is not reflected as winning.");
    }
#endif

    stats.winningRegionUpdatesTimer.stop();

    uint64_t maximalNrActions = 0;
    for (uint64_t state = 0; state < pomdp.getNumberOfStates(); ++state) {
        maximalNrActions = std::max(pomdp.getTransitionMatrix().getRowGroupSize(state), maximalNrActions);
    }
    std::vector<storm::expressions::Expression> atLeastOneOfStates;
    for (uint64_t state : oneOfTheseStates) {
        STORM_LOG_ASSERT(reachVarExpressions.size() > state, "state id " << state << " exceeds number of states (" << reachVarExpressions.size() << ")");
        atLeastOneOfStates.push_back(reachVarExpressions[state]);
    }
    if (!atLeastOneOfStates.empty()) {
        smtSolver->add(storm::expressions::disjunction(atLeastOneOfStates));
    }

    std::set<storm::expressions::Expression> allOfTheseAssumption;
    std::vector<storm::expressions::Expression> updateForObservationExpressions;

    for (uint64_t state : allOfTheseStates) {
        assert(reachVarExpressions.size() > state);
        allOfTheseAssumption.insert(reachVarExpressions[state]);
    }

    if (winningRegion.empty()) {
        // Keep it simple here to help bughunting if necessary.
        for (uint64_t ob = 0; ob < pomdp.getNrObservations(); ++ob) {
            updateForObservationExpressions.push_back(storm::expressions::disjunction(reachVarExpressionsPerObservation[ob]));
            schedulerForObs.push_back(0);
        }
    } else {
        uint64_t obs = 0;
        for (auto const& statesForObservation : statesPerObservation) {
            schedulerForObs.push_back(0);
            for (auto const& winningSet : winningRegion.getWinningSetsPerObservation(obs)) {
                assert(!winningSet.empty());
                assert(obs < schedulerForObs.size());
                ++(schedulerForObs[obs]);
                auto constant = expressionManager->integer(schedulerForObs[obs]);
                for (auto const& stateOffset : ~winningSet) {
                    uint64_t state = statesForObservation[stateOffset];
                    STORM_PRINT("State " << state << " with observation " << obs << " does not allow scheduler " << constant);
                    smtSolver->add(!(continuationVarExpressions[state] && (schedulerVariableExpressions[obs] == constant)));
                    smtSolver->add(
                        !(reachVarExpressions[state] && followVarExpressions[pomdp.getObservation(state)] && (schedulerVariableExpressions[obs] == constant)));
                }
            }
            if (winningRegion.getWinningSetsPerObservation(obs).empty()) {
                updateForObservationExpressions.push_back(storm::expressions::disjunction(reachVarExpressionsPerObservation[obs]));
                // Here is some opportunity for further constraints,
                // but one has to be careful that the constraints added here are never removed (the push happens after adding these constraints)
            } else {
                updateForObservationExpressions.push_back(winningRegion.extensionExpression(obs, reachVarExpressionsPerObservation[obs]));
            }
            ++obs;
        }
    }

    smtSolver->push();
    for (uint64_t obs = 0; obs < pomdp.getNrObservations(); ++obs) {
        auto constant = expressionManager->integer(schedulerForObs[obs]);
        smtSolver->add(schedulerVariableExpressions[obs] <= constant);
        smtSolver->add(storm::expressions::iff(observationUpdatedExpressions[obs], updateForObservationExpressions[obs]));
    }

    assert(pomdp.getNrObservations() == schedulerForObs.size());

//    printAllValuation();

    InternalObservationScheduler scheduler;
    scheduler.switchObservations = storm::storage::BitVector(pomdp.getNrObservations());
    storm::storage::BitVector newObservations(pomdp.getNrObservations());
    storm::storage::BitVector newObservationsAfterSwitch(pomdp.getNrObservations());
    storm::storage::BitVector observations(pomdp.getNrObservations());
    storm::storage::BitVector observationsAfterSwitch(pomdp.getNrObservations());
    storm::storage::BitVector observationUpdated(pomdp.getNrObservations());
    storm::storage::BitVector uncoveredStates(pomdp.getNumberOfStates());
    storm::storage::BitVector coveredStates(pomdp.getNumberOfStates());
    storm::storage::BitVector coveredStatesAfterSwitch(pomdp.getNumberOfStates());
    // ObservationSchedulerMoore schedulerMoore;
    ObservationPolicyPosteriorMealy schedulerPostMealy;
    std::unordered_map<uint64_t, uint64_t> winningObservationsFirstScheduler;

    stats.initializeSolverTimer.stop();
    STORM_LOG_INFO("Start iterative solver...");

    uint64_t iterations = 0;

    bool foundWhatWeLookFor = false;
    while (true) {
        stats.incrementOuterIterations();
        // TODO consider what we really want to store about the schedulers.
        scheduler.reset(pomdp.getNrObservations(), maximalNrActions);
        observations.clear();
        observationsAfterSwitch.clear();
        coveredStates = targetStates;
        coveredStatesAfterSwitch.clear();
        observationUpdated.clear();
        bool newSchedulerDiscovered = false;
        if (!allOfTheseAssumption.empty()) {
            ++iterations;
            bool foundResult = this->smtCheck(iterations, allOfTheseAssumption);
            if (foundResult) {
                // Consider storing the scheduler
                foundWhatWeLookFor = true;
            }
        }
        uint64_t localIterations = 0;
        while (true) {
            ++iterations;
            ++localIterations;

            bool foundScheduler = foundWhatWeLookFor;
            if (!foundScheduler) {
                foundScheduler = this->smtCheck(iterations);
            }
            if (!foundScheduler) {
                break;
            }
            newSchedulerDiscovered = true;
            stats.evaluateExtensionSolverTime.start();
            auto const& model = smtSolver->getModel();

            newObservationsAfterSwitch.clear();
            newObservations.clear();

            uint64_t obs = 0;
            for (auto const& ov : observationUpdatedVariables) {
                if (!observationUpdated.get(obs) && model->getBooleanValue(ov)) {
                    STORM_LOG_DEBUG(std::endl<< "New observation updated: " << obs << std::endl);
                    observationUpdated.set(obs);
                }
                obs++;
            }

            uncoveredStates = ~coveredStates;
            for (uint64_t i : uncoveredStates) {
                auto const& rv = reachVars[i];
                auto const& rvExpr = reachVarExpressions[i];
                if (observationUpdated.get(pomdp.getObservation(i)) && model->getBooleanValue(rv)) {
                    STORM_LOG_DEBUG(std::endl << "New covered state: " << i << std::endl);
                    smtSolver->add(rvExpr);
                    assert(!surelyReachSinkStates.get(i));
                    newObservations.set(pomdp.getObservation(i));
                    coveredStates.set(i);
                    if (lookaheadConstraintsRequired) {
                        if (options.pathVariableType == MemlessSearchPathVariables::IntegerRanking) {
                            smtSolver->add(pathVarExpressions[i][0] == expressionManager->integer(model->getIntegerValue(pathVars[i][0])));
                        } else if (options.pathVariableType == MemlessSearchPathVariables::RealRanking) {
                            smtSolver->add(pathVarExpressions[i][0] == expressionManager->rational(model->getRationalValue(pathVars[i][0])));
                        }
                    }
                }
            }

            storm::storage::BitVector uncoveredStatesAfterSwitch(~coveredStatesAfterSwitch);
            for (uint64_t i : uncoveredStatesAfterSwitch) {
                auto const& cv = continuationVars[i];
                if (model->getBooleanValue(cv)) {
                    uint64_t obs = pomdp.getObservation(i);
                    STORM_LOG_ASSERT(winningRegion.isWinning(obs, getOffsetFromObservation(i, obs)),
                                     "Cannot continue: No scheduler known for state " << i << " (observation " << obs << ").");
                    auto const& cvExpr = continuationVarExpressions[i];
                    smtSolver->add(cvExpr);
                    if (!observationsAfterSwitch.get(obs)) {
                        newObservationsAfterSwitch.set(obs);
                    }
                }
            }
            stats.evaluateExtensionSolverTime.stop();

            if (options.computeTraceOutput()) {
                detail::printRelevantInfoFromModel(model, reachVars, continuationVars);
            }
            stats.encodeExtensionSolverTime.start();
            for (auto obs : newObservations) {
                auto const& actionSelectionVarsForObs = actionSelectionVars[obs];
                observations.set(obs);
                for (uint64_t act = 0; act < actionSelectionVarsForObs.size(); ++act) {
                    if (model->getBooleanValue(actionSelectionVarsForObs[act])) {
                        scheduler.actions[obs].set(act);
                        smtSolver->add(actionSelectionVarExpressions[obs][act]);
                    } else {
                        smtSolver->add(!actionSelectionVarExpressions[obs][act]);
                    }
                }
                if (model->getBooleanValue(switchVars[obs])) {
                    scheduler.switchObservations.set(obs);
                    smtSolver->add(switchVarExpressions[obs]);
                } else {
                    smtSolver->add(!switchVarExpressions[obs]);
                }
                if (model->getBooleanValue(followVars[obs])) {
                    smtSolver->add(followVarExpressions[obs]);
                } else {
                    smtSolver->add(!followVarExpressions[obs]);
                }
            }
            for (auto obs : newObservationsAfterSwitch) {
                observationsAfterSwitch.set(obs);
                scheduler.schedulerRef[obs] = model->getIntegerValue(schedulerVariables[obs]);
                smtSolver->add(schedulerVariableExpressions[obs] == expressionManager->integer(scheduler.schedulerRef[obs]));
            }

//            if (options.computeTraceOutput()) {
////              generates debug output, but here we only want it for trace level.
////              For consistency, all output on debug level.
//                STORM_PRINT("the scheduler so far: ");
//                scheduler.printForObservations(obsValuations, choiceLabeling, choiceIndices, statesPerObservation, observations, observationsAfterSwitch);
//            }

            if (foundWhatWeLookFor ||
                (options.localIterationMaximum > 0 && (localIterations % (options.localIterationMaximum + 1) == options.localIterationMaximum))) {
                stats.encodeExtensionSolverTime.stop();
                break;
            }

            std::vector<storm::expressions::Expression> remainingExpressions;
            for (auto index : ~coveredStates) {
                if (observationUpdated.get(pomdp.getObservation(index))) {
                    remainingExpressions.push_back(reachVarExpressions[index]);
                }
            }
            for (auto index : ~observationUpdated) {
                remainingExpressions.push_back(observationUpdatedExpressions[index]);
            }

            if (remainingExpressions.empty()) {
                stats.encodeExtensionSolverTime.stop();
                break;
            }
            smtSolver->add(storm::expressions::disjunction(remainingExpressions));
            stats.encodeExtensionSolverTime.stop();
            // smtSolver->setTimeout(options.extensionCallTimeout);
        }
        if (!newSchedulerDiscovered) {
            break;
        }

        //todo: This is the place to stop early for winning region computation when initial observations are in the winning region
        // Check if all initial observations are in the winning region
        bool allInitialObservationsWinning = true;
        for (auto initialState : pomdp.getInitialStates()) {
            uint64_t initialObservation = pomdp.getObservation(initialState);
            if (!winningRegion.observationIsWinning(initialObservation)) {
                allInitialObservationsWinning = false;
                break;
            }
        }
        if (allInitialObservationsWinning) {
            STORM_PRINT_AND_LOG("All initial observations are in the winning region. Stopping the iterative solver.");
            break;
        }
        // smtSolver->unsetTimeout();
        smtSolver->pop();

//      if (options.computeDebugOutput()) {
        std::stringstream strstr;
        coveredStatesToStream(strstr, ~coveredStates);
        STORM_PRINT(strstr.str());

        // generates info output, but here we only want it for debug level.
        // For consistency, all output on info level.
        STORM_PRINT("the scheduler: " << finalSchedulers.size()+1 << std::endl);

        scheduler.printForObservations(obsValuations, choiceLabeling, choiceIndices, statesPerObservation, observations, observationsAfterSwitch);

        stats.winningRegionUpdatesTimer.start();
        storm::storage::BitVector updated(observations.size());
        uint64_t newTargetObservations = 0;
        for (uint64_t observation = 0; observation < pomdp.getNrObservations(); ++observation) {
            STORM_LOG_DEBUG("consider observation " << observation << std::endl);
            storm::storage::BitVector update(statesPerObservation[observation].size());
            uint64_t i = 0;
            for (uint64_t state : statesPerObservation[observation]) {
                if (coveredStates.get(state)) {
                    assert(!surelyReachSinkStates.get(state));
                    update.set(i);
                }
                ++i;
            }
            if (!update.empty()) {
                STORM_LOG_DEBUG("Update Winning Region: Observation " << observation << " with update " << update << std::endl);
                bool updateResult = winningRegion.update(observation, update);
                STORM_LOG_DEBUG("Region changed:" << updateResult << std::endl);
                if (updateResult) {
                    if (winningRegion.observationIsWinning(observation)) {
                        ++newTargetObservations;
                        for (uint64_t state : statesPerObservation[observation]) {
                            targetStates.set(state);
                            assert(!surelyReachSinkStates.get(state));
                        }
                        if (winningObservationsFirstScheduler.find(observation) == winningObservationsFirstScheduler.end()) {
                            winningObservationsFirstScheduler[observation] = stats.getIterations();
                        }
                    }
                    updated.set(observation);
                    updateForObservationExpressions[observation] =
                        winningRegion.extensionExpression(observation, reachVarExpressionsPerObservation[observation]);
                }
            }
        }
        // update the FSC
        // schedulerMoore = scheduler.update_fsc_moore(choiceLabeling, choiceIndices, statesPerObservation, observations, observationsAfterSwitch, winningObservationsFirstScheduler, schedulerMoore, stats.getIterations());
        schedulerPostMealy = scheduler.update_fsc_mealy(choiceLabeling, choiceIndices, statesPerObservation, observations, observationsAfterSwitch, winningObservationsFirstScheduler, schedulerPostMealy, stats.getIterations(), options.lazyDTFSC);

        stats.winningRegionUpdatesTimer.stop();
        if (foundWhatWeLookFor) {
            return true;
        }

        // this was commented the final graph based analysis below

        if (newTargetObservations > 0) {
//            stats.graphSearchTime.start();
//            storm::analysis::QualitativeAnalysisOnGraphs<ValueType> graphanalysis(pomdp);
            uint64_t targetStatesBefore = targetStates.getNumberOfSetBits();
            STORM_PRINT("Target states before graph based analysis " << targetStates.getNumberOfSetBits());
//            STORM_LOG_INFO("Target states before graph based analysis " << targetStates.getNumberOfSetBits());
//            targetStates = graphanalysis.analyseProb1Max(~surelyReachSinkStates, targetStates);
            uint64_t targetStatesAfter = targetStates.getNumberOfSetBits();
            STORM_PRINT("Target states after graph based analysis " << targetStates.getNumberOfSetBits());
//            STORM_LOG_INFO("Target states after graph based analysis " << targetStates.getNumberOfSetBits());
//            stats.graphSearchTime.stop();
            if (targetStatesAfter - targetStatesBefore > 0) {
                stats.winningRegionUpdatesTimer.start();
                storm::storage::BitVector potentialWinner(pomdp.getNrObservations());
                storm::storage::BitVector observationsWithPartialWinners(pomdp.getNrObservations());
                for (uint64_t observation = 0; observation < pomdp.getNrObservations(); ++observation) {
                    if (winningRegion.observationIsWinning(observation)) {
                        continue;
                    }
                    bool observationIsWinning = true;
                    for (uint64_t state : statesPerObservation[observation]) {
                        if (!targetStates.get(state)) {
                            observationIsWinning = false;
                            observationsWithPartialWinners.set(observation);
                        } else {
                            potentialWinner.set(observation);
                        }
                    }
                    if (observationIsWinning) {
                        stats.incrementGraphBasedWinningObservations();
                        winningRegion.setObservationIsWinning(observation);
                        STORM_LOG_INFO("Observation " << getObservationValuation(observation) << " with Storm internal id = " << observation << " is winning.");
                        updated.set(observation);
                    }
                }
                STORM_PRINT("Graph-based winning obs: " << stats.getGraphBasedwinningObservations());
                observationsWithPartialWinners &= potentialWinner;
                for (auto const observation : observationsWithPartialWinners) {
                    uint64_t nrStatesForObs = statesPerObservation[observation].size();
                    storm::storage::BitVector update(nrStatesForObs);
                    for (uint64_t i = 0; i < nrStatesForObs; ++i) {
                        uint64_t state = statesPerObservation[observation][i];
                        if (targetStates.get(state)) {
                            update.set(i);
                        }
                    }
                    assert(!update.empty());
                    STORM_PRINT("Extend winning region for observation " << observation << " with target states/offsets" << update);
                    winningRegion.addTargetStates(observation, update);
                    assert(winningRegion.query(observation, update));  //
                    updated.set(observation);
                }
                stats.winningRegionUpdatesTimer.stop();

                if (observationsWithPartialWinners.getNumberOfSetBits() > 0) {
                    reset();
                    return analyze(k, ~targetStates & ~surelyReachSinkStates, allOfTheseStates);
                }
            }
        }

        STORM_LOG_ASSERT(!updated.empty(), "The strategy should be new in at least one place");
        if (options.computeDebugOutput()) {
            winningRegion.print();
        }
        if (options.validateEveryStep) {
            STORM_LOG_WARN("Validating every step, for debug purposes only!");
            validator->validate();
        }
        if (stats.getIterations() % options.restartAfterNIterations == options.restartAfterNIterations - 1) {
            reset();
            return analyze(k, ~targetStates & ~surelyReachSinkStates, allOfTheseStates);
        }
        stats.updateNewStrategySolverTime.start();
        for (uint64_t observation : updated) {
            updateForObservationExpressions[observation] = winningRegion.extensionExpression(observation, reachVarExpressionsPerObservation[observation]);
        }

        uint64_t obs = 0;
        for (auto const& statesForObservation : statesPerObservation) {
            if (observations.get(obs) && updated.get(obs)) {
                STORM_LOG_DEBUG(std::endl<< "We have a new policy ( " << finalSchedulers.size() << " ) for states with observation " << obs << "."<<std::endl);
                assert(schedulerForObs.size() > obs);
                (schedulerForObs[obs])++;
                STORM_LOG_DEBUG("We now have " << schedulerForObs[obs] << " policies for states with observation " << obs);
                if (winningRegion.observationIsWinning(obs)) {
                    for (auto const& state : statesForObservation) {
                        smtSolver->add(reachVarExpressions[state]);
                    }
                    auto constant = expressionManager->integer(schedulerForObs[obs]);
                    smtSolver->add(schedulerVariableExpressions[obs] == constant);
                } else {
                    auto constant = expressionManager->integer(schedulerForObs[obs]);
                    for (auto const& state : statesForObservation) {
                        if (!coveredStates.get(state)) {
                            smtSolver->add(!(continuationVarExpressions[state] && (schedulerVariableExpressions[obs] == constant)));
                            smtSolver->add(!(reachVarExpressions[state] && followVarExpressions[pomdp.getObservation(state)] &&
                                             (schedulerVariableExpressions[obs] == constant)));
                        }
                    }
                }
            }
            ++obs;
        }
        finalSchedulers.push_back(scheduler);
        STORM_LOG_INFO("New scheduler ref:" << finalSchedulers.size()); // I am guessing this would match the scheduler refs in future scheduler.

        smtSolver->push();

        for (uint64_t obs = 0; obs < pomdp.getNrObservations(); ++obs) {
            if (winningRegion.observationIsWinning(obs)) {
                auto constant = expressionManager->integer(schedulerForObs[obs]);
                // Scheduler variable is already fixed.
                // Observation will not be updated.
                smtSolver->add(!observationUpdatedExpressions[obs]);
            } else {
                auto constant = expressionManager->integer(schedulerForObs[obs]);
                smtSolver->add(schedulerVariableExpressions[obs] <= constant);
                smtSolver->add(storm::expressions::iff(observationUpdatedExpressions[obs], updateForObservationExpressions[obs]));
            }
        }
        stats.updateNewStrategySolverTime.stop();


        STORM_LOG_INFO("... after iteration " << stats.getIterations() << " so far " << stats.getChecks() << " checks.");
    }
    if (options.validateResult) {
        STORM_LOG_WARN("Validating result is a winning region, only for debugging purposes.");
        validator->validate();
        STORM_LOG_WARN("Validating result is a fixed point, only for debugging purposes.");
        validator->validateIsMaximal(surelyReachSinkStates);
    }

    if (!allOfTheseStates.empty()) {
        for (uint64_t observation = 0; observation < pomdp.getNrObservations(); ++observation) {
            storm::storage::BitVector check(statesPerObservation[observation].size());
            uint64_t i = 0;
            for (uint64_t state : statesPerObservation[observation]) {
                if (allOfTheseStates.get(state)) {
                    check.set(i);
                }
                ++i;
            }
            if (!winningRegion.query(observation, check)) {
                return false;
            }
        }
    }
    // schedulerMoore.exportMooreScheduler(schedulerMoore, obsValuations, options.getWinningRegionFolder());
    schedulerPostMealy.exportPosteriorMealyPolicy(schedulerPostMealy, obsValuations, options.getWinningRegionFolder(), options.lazyDTFSC, options.unstructuredObservations);
    return true;
}

template<typename ValueType>
void IterativePolicySearch<ValueType>::coveredStatesToStream(std::ostream& os, storm::storage::BitVector const& remaining) const {
    bool first = true;
    for (uint64_t state = 0; state < pomdp.getNumberOfStates(); ++state) {
        if (!remaining.get(state)) {
            if (first) {
                first = false;
            } else {
                os << ", ";
            }
            std::cout << state;
            if (pomdp.hasStateValuations()) {
                os << ":" << pomdp.getStateValuations().getStateInfo(state);
            }
        }
    }
    os << '\n';
}

template<typename ValueType>
void IterativePolicySearch<ValueType>::printScheduler(std::vector<InternalObservationScheduler> const&) {}

template<typename ValueType>
void IterativePolicySearch<ValueType>::finalizeStatistics() {}

template<typename ValueType>
typename IterativePolicySearch<ValueType>::Statistics const& IterativePolicySearch<ValueType>::getStatistics() const {
    return stats;
}

template<typename ValueType>
bool IterativePolicySearch<ValueType>::smtCheck(uint64_t iteration, std::set<storm::expressions::Expression> const& assumptions) {
    if (options.isExportSATSet()) {
        STORM_LOG_DEBUG("Export SMT Solver Call (" << iteration << ")");
        std::string filepath = options.getExportSATCallsPath() + "call_" + std::to_string(iteration) + ".smt2";
        std::ofstream filestream;
        storm::utility::openFile(filepath, filestream);
        filestream << smtSolver->getSmtLibString() << '\n';
        storm::utility::closeFile(filestream);
    }

    STORM_LOG_DEBUG("Call to SMT Solver (" << iteration << ")");
    storm::solver::SmtSolver::CheckResult result;
    stats.smtCheckTimer.start();
    if (assumptions.empty()) {
        result = smtSolver->check();
    } else {
        result = smtSolver->checkWithAssumptions(assumptions);
    }
    stats.smtCheckTimer.stop();
    stats.incrementSmtChecks();

    if (result == storm::solver::SmtSolver::CheckResult::Unknown) {
        STORM_LOG_DEBUG("Unknown");
        return false;
    } else if (result == storm::solver::SmtSolver::CheckResult::Unsat) {
        STORM_LOG_DEBUG("Unsatisfiable!");
        return false;
    }

    STORM_LOG_DEBUG("Satisfying assignment: ");
    STORM_LOG_DEBUG(smtSolver->getModelAsValuation().toString(true));
    return true;
}

template class IterativePolicySearch<double>;
template class IterativePolicySearch<storm::RationalNumber>;
}  // namespace storm::pomdp
