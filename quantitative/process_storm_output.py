import os, io , sys
import networkx as nx
import pandas as pd

pd.set_option('future.no_silent_downcasting', True)

TEMP_DIR = 'temp'
if not os.path.exists(TEMP_DIR):
	os.makedirs(TEMP_DIR)

class MooreEngine:

	def __init__(self, dotFile): # Read the dot file output by storm and create the graph
		print(f"Reading {dotFile}...\n")
		self.StormFSM = nx.MultiDiGraph(nx.drawing.nx_pydot.read_dot(dotFile))
		self.fileNamePrefix = dotFile.split(os.sep)[-1].split('.')[0]



	def _getInOutMealy(self,s:str): # parse the input and output of the mealy machine
		s = s.strip().split('/')
		observationStr = s[0][2:-1].split('\t& ')
		actionStr = s[1][:-1]

		obsValuation = {}
		for obs in observationStr:
			if "=" in obs: # integer
				obs = obs.split('=')
				obsValuation[obs[0]] = int(obs[1])
			else: # boolean
				if obs[0] == '!':
					obsValuation[obs[1:]] = False
				else:
					obsValuation[obs] = True

		actionDist = {}
		if "{" in actionStr: # randomized action
			actionStr = actionStr[2:-2].split(' | ')
			for randomAction in actionStr:
				randomAction = randomAction.strip().split(' -> ')
				probability = randomAction[0]
				action = randomAction[1]
				actionDist[action] = float(probability)
		else:	# deterministic action
			action = actionStr.strip()
			actionDist[action] = 1.0
	
		return obsValuation, actionDist


	
	def createMoore(self): # Create the Moore machine from the Storm FSM, and create the tables for the positional strategies and FSC transitions
		self.Moore = nx.DiGraph()
		print("Analysing Mealy machine...\n")

		positionalStratTables = {} # node to table of positional strategies, labels are (randomized) actions
		fscTransitions = {} # node to table of fsc transitions, labels are next state
		# randomizedNodes = set() # set of nodes with randomized strategies

		for node in self.StormFSM.nodes():
			psTable = []
			fscTable = []

			if node == '__init': # initial node
				assert (len(self.StormFSM.edges(node)) == 1)
				initialNode = list(self.StormFSM.edges(node))[0][1]
				self.Moore.add_node(initialNode, initial=True)
				# print(f"Initial node: {initialNode}")
			else:
				for edge in self.StormFSM.edges(node):
					labels = self.StormFSM.get_edge_data(edge[0], edge[1])
					for key in labels:
						label = labels[key]
						obsValuation, actionDist = self._getInOutMealy(label['label']) 
						
						psTable.append((obsValuation, actionDist))
						fscTable.append((obsValuation, edge[1]))

						self.Moore.add_edge(edge[0], edge[1])

						# print(f"Node: {node}, Edge: {edge[0]}->{edge[1]}, Observation: {obsValuation}, Action: {actionDist}, Next State: {edge[1]}")

				positionalStratTables[node] = psTable
				fscTransitions[node] = fscTable

		self.Moore.add_node(initialNode)

		self.positionalStratTables = positionalStratTables
		self.fscTransitions = fscTransitions



	def processTables(self): # Create the csv files for the positional strategies and FSC transitions
		self.outputdir = os.path.join(TEMP_DIR,self.fileNamePrefix)
		self.schedulerdir = os.path.join(self.outputdir, "schedulers")
		self.transitiondir = os.path.join(self.outputdir, "transitions")
		if not os.path.exists(self.outputdir):
			os.makedirs(self.outputdir)
		if not os.path.exists(self.schedulerdir):
			os.makedirs(self.schedulerdir)
		if not os.path.exists(self.transitiondir):
			os.makedirs(self.transitiondir)

		actions = set() # set of (randomized) actions
		nodeDataFrames = {} # node to dataframe of positional strategies
		edgeDataFrames = {} # node to dataframe of fsc transitions

		for node in self.positionalStratTables:
			psTable = self.positionalStratTables[node]
			fscTable = self.fscTransitions[node]
			dfNode = pd.DataFrame(columns=list(psTable[0][0].keys())+["action"])
			dfEdge = pd.DataFrame(columns=list(fscTable[0][0].keys())+["nextState"])

			# strategies in the dataframe
			for entry in psTable:
				if len(entry[1]) == 1:
					action = list(entry[1].keys())[0]
				else:
					action = ""#str(entry[1])
					for key in entry[1]:
						action += f"{key} -> {entry[1][key]}; "
				
				actions.add(action)

				dfNode.loc[len(dfNode)] = list(entry[0].values()) + [action]

			# Replace True with 1 and False with 0
			dfNode = dfNode.replace({True: 1, False: 0}).drop_duplicates() # Do we need to drop duplicates? Do we need to replace True and False?
			
			nodeDataFrames[node] = dfNode
			
			# fsc transitions in the dataframe
			for entry in self.fscTransitions[node]:
				dfEdge.loc[len(dfEdge)] = list(entry[0].values()) + [entry[1]]

			dfEdge = dfEdge.replace({True: 1, False: 0}).drop_duplicates()

			edgeDataFrames[node] = dfEdge

		# strategy to csv
		print("Writing strategies to csv...\n")
		for node in nodeDataFrames:
			nodeDataFrames[node]['action'].replace(actions, range(len(actions)), inplace=True) # replace actions with integers for dtcontrol compatibility, 
			csv_buffer = io.StringIO()
			csv_buffer.write(f"#NON-PERMISSIVE\n#BEGIN {len(dfNode.columns)-1} 1\n") # dtcontrol header
			nodeDataFrames[node].to_csv(csv_buffer, index=False, header=False)
			csv_string = csv_buffer.getvalue()
			csv_buffer.close()
			print(csv_string, file=open(os.path.join(self.schedulerdir, f"{node}_scheduler.csv"), "w"))

		# fsc transitions to csv
		print("Writing transitions to csv...\n")
		for node in edgeDataFrames:
			csv_buffer = io.StringIO()
			csv_buffer.write(f"#PERMISSIVE\n#BEGIN {len(dfEdge.columns)-1} 1\n")
			edgeDataFrames[node].to_csv(csv_buffer, index=False, header=False)
			csv_string = csv_buffer.getvalue()
			csv_buffer.close()
			print(csv_string, file=open(os.path.join(self.transitiondir, f"{node}_transition.csv"), "w"))

		# actions to txt
		actionFile=open(self.outputdir+os.sep+"action_mapping.txt", "w")
		print(f"Writing actions to {actionFile.name}")
		for i,action in enumerate(actions):
			print(i,action)
			print(action, file=actionFile)

		# state variables to txt
		stateFile=open(self.outputdir+os.sep+"ordered_observations.txt", "w")
		print(f"\nWriting state variables to {stateFile.name}")
		for i,variable in enumerate(list(dfNode.columns)[:-1]):
			print(i,variable)
			print(variable, file=stateFile)



	def writeDotMoore(self): # Write the Moore machine to a dot file
		mooreDotFile = os.path.join(self.outputdir, f"{self.fileNamePrefix}_moore.dot")
		print(f"\nWriting Moore machine to {mooreDotFile}")
		with open(mooreDotFile, 'w') as f:
			f.write("digraph G {\n")
			
			for node in self.Moore.nodes(data=True):
				initial = 'initial' in node[1] and node[1]['initial']
				f.write(f'  {node[0]} [shape=doublecircle, color=red];\n' if initial else f'  {node[0]};\n')
			
			for u, v, data in self.Moore.edges(data=True):
				label = data.get('label', '')
				f.write(f'  {u} -> {v} [label="{label}"];\n')
			
			f.write("}\n")



def main():
	stormOutput = sys.argv[1]
	engine = MooreEngine(stormOutput)
	engine.createMoore()
	engine.processTables()
	engine.writeDotMoore()




if __name__ == "__main__":
	main()
