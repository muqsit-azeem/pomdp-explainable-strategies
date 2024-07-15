#!/bin/bash

# run storm iterative solver
echo "Running run_storm_pomdp_explainable.py..."
python3 run_storm_pomdp_explainable.py "storm/build" "pomdp-benchmarks-XStrat" 10000

# check for successful run
if [ $? -ne 0 ]; then
    echo "run_storm_pomdp_explainable.py failed. Exiting."
    exit 1
fi

# run dtcontrol
echo "Running run_dtcontrol.py..."
python3 run_dtcontrol.py .

# check for successful run
if [ $? -ne 0 ]; then
    echo "run_dtcontrol.py failed. Exiting."
    exit 1
fi

# postprocess to with actual obs-action names
echo "Running postprocess.py..."
python3 postprocess.py

# check for successful run
if [ $? -ne 0 ]; then
    echo "postprocess.py failed. Exiting."
    exit 1
fi

echo "All scripts ran successfully."

