#!/bin/bash


# virtual environment path
VENV_PATH="./venv/bin/activate"

# activate the virtual environment where dtcontrol is installed
echo "Activating virtual environment..."
source $VENV_PATH

# run storm iterative solver
echo "Running run_all.py..."
python3 run_all.py

# check for successful run
if [ $? -ne 0 ]; then
    echo "run_all.py failed. Exiting."
    exit 1
fi

echo "All scripts ran successfully."

