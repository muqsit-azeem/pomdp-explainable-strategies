#!/bin/bash


echo "Running run_all.py..."
python3 run_all.py

# check for successful run
if [ $? -ne 0 ]; then
    echo "run_all.py failed. Exiting."
    exit 1
fi

echo "All scripts ran successfully."

