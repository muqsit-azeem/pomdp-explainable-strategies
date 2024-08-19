#!/bin/bash

# virtual environment path
VENV_PATH="./venv/bin/activate"

# Check if the DIR_PATH argument is provided
if [ -z "$1" ]; then
    echo "Error: No directory path provided."
    echo "Usage: $0 <DIR_PATH>"
    exit 1
fi

# Assign the first argument to DIR_PATH
DIR_PATH=$1

# Activate the virtual environment where dtcontrol is installed
echo "Activating virtual environment..."
source $VENV_PATH

# Run the series of Python scripts with the provided DIR_PATH
python3 quantitative/process_storm_output.py "$DIR_PATH"
python3 run_dtcontrol_quantitative.py "$DIR_PATH"
python3 postprocess_quantitive.py "$DIR_PATH"

# create the table
python3 quantitative/create_table_storm.py "$DIR_PATH" latex
python3 quantitative/create_table2_csv_table_size_storm.py "$DIR_PATH" latex
