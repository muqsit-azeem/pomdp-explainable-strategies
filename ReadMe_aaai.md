# Iterative DT-FSC

This section provides details for benchmarks related to the iterative DT-FSC method.

- The benchmarks are in the directory `iterative/benchmarks/`.
- The FSCs are in the directory `iterative/storm-mealy-machines/`.
- The DT-FSCs are in the directory `iterative/explainable-fsc-results/`.

### Running the Experiments
To rerun the experiments using the iterative DT-FSC algorithm, use the following command:
```bash
./run_iterative.sh iterative
```
This will create a directory `iterative/explainable-fsc` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Skip DT-FSC

This section provides details for benchmarks related to the Skip DT-FSC method.

- The benchmarks are in the directory `skip/benchmarks/`.
- The FSCs are in the directory `skip/storm-mealy-machines/`.
- The DT-FSCs are in the directory `skip/explainable-fsc-results/`.

### Running the Experiments
To rerun the experiments using the Skip DT-FSC algorithm, use the following command:
```bash
./run_skip.sh skip
```
This will create a directory `skip/explainable-fsc` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Quantitative Models Benchmarks

See the readme file in the directory `quantitative` for more details.

- The benchmarks are in the directory `quantitative/benchmarks/`. In each benchmark folder, there is a PRISM or explicit DRN model file and a properties file.
- The FSCs are in the directory `quantitative/storm-mealy-machines/`.
- The DT-FSCs are in the directory `quantitative/explainable-fsc-results/`.

### Running the Experiments
To rerun the experiments, use the following command:
```bash
./run_quantitative.sh quantitative
```
This will create a directory `quantitative/explainable-fsc` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Heart Disease Case Study

See the readme file in the directory `quantitative/heart` for more details.

- The PRISM model file: `heart-disease.prism`
- The FSC generated: `quantitative/heart/storm-mealy-machines/heart-disease.dot`
- The DT-FSCs: `quantitative/heart/explainable-fsc-results/heart-disease`

### Running the Experiments

To rerun the experiments, use the following command:
```bash
./run_quantitative.sh quantitative/heart
```
This will create a directory `quantitative/heart/explainable-fsc` with the DT-FSCs for the heart disease case study and also print the results in the terminal.

# README: Generating Tables from DT-FSC, Skip DT-FSC, and General Case Using Cutoff Strategy

## Overview

This repository contains `.dot` files for three different approaches to generating Decision Tree Finite State Controllers (DT-FSC):

1. **DT-FSC (Iterative Method)**: The files generated using the iterative method.
2. **Skip DT-FSC**: The files generated using the Skip DT-FSC method.
3. **General Case Using Cutoff Strategy**: The files generated using the general case with a cutoff strategy.

Each of these approaches has its own set of benchmarks stored in separate directories, along with a specific Python script to generate the corresponding tables.

## Directory Structure

The directory structure is organized as follows:

```
root_directory/
│
├── dtcontrol_output_iterative/          # Contains .dot files for DT-FSC (Iterative Method)
│   ├── benchmark1.dot
│   ├── benchmark2.dot
│   └── ...
│
├── dtcontrol_output_skip/               # Contains .dot files for Skip DT-FSC
│   ├── benchmark1.dot
│   ├── benchmark2.dot
│   └── ...
│
├── dtcontrol_output_cutoff/             # Contains .dot files for General Case Using Cutoff Strategy
│   ├── benchmark1.dot
│   ├── benchmark2.dot
│   └── ...
│
├── generate_table_iterative.py          # Script to generate tables for DT-FSC (Iterative Method)
├── generate_table_skip.py               # Script to generate tables for Skip DT-FSC
└── generate_table_cutoff.py             # Script to generate tables for General Case Using Cutoff Strategy
```

## Generating Tables

### 1. DT-FSC (Iterative Method)

To generate tables for the DT-FSC (Iterative Method):

1. **Ensure you have the necessary environment**:
   - Python 3.x
   - Required Python packages (`pandas`, `numpy`, `matplotlib`)

2. **Run the Script**:
   - The `.dot` files are stored in the `./dtcontrol_output_iterative/` directory.
   - Execute the script `generate_table_iterative.py`:

   ```bash
   python generate_table_iterative.py
   ```

   This will generate a table file named `output_table_iterative.tex`.

### 2. Skip DT-FSC

To generate tables for Skip DT-FSC:

1. **Ensure you have the necessary environment**:
   - Python 3.x
   - Required Python packages (`pandas`, `numpy`, `matplotlib`)

2. **Run the Script**:
   - The `.dot` files are stored in the `./dtcontrol_output_skip/` directory.
   - Execute the script `generate_table_skip.py`:

   ```bash
   python generate_table_skip.py
   ```

   This will generate a table file named `output_table_skip.tex`.

### 3. General Case Using Cutoff Strategy

To generate tables for the General Case Using Cutoff Strategy:

1. **Ensure you have the necessary environment**:
   - Python 3.x
   - Required Python packages (`pandas`, `numpy`, `matplotlib`)

2. **Run the Script**:
   - The `.dot` files are stored in the `./dtcontrol_output_cutoff/` directory.
   - Execute the script `generate_table_cutoff.py`:

   ```bash
   python generate_table_cutoff.py
   ```

   This will generate a table file named `output_table_cutoff.tex`.

## Integrating Tables into Your Document

After generating the tables, you can include them in your LaTeX document as follows:

```latex
\input{output_table_iterative.tex}   % For DT-FSC (Iterative Method)
\input{output_table_skip.tex}        % For Skip DT-FSC
\input{output_table_cutoff.tex}      % For General Case Using Cutoff Strategy
```

## Docker Image

For a pre-configured environment that includes all necessary dependencies and scripts, you can use the Docker image available on Zenodo:

- **Zenodo Link**: [Insert Zenodo Link Here]

This Docker image ensures a consistent and replicable environment for running the scripts and generating the tables.

## Conclusion

This repository provides a comprehensive set of tools and data for generating tables from DT-FSC, Skip DT-FSC, and the General Case Using Cutoff Strategy. Simply run the appropriate script for the method you are interested in, and integrate the generated tables into your document.

If you encounter any issues or have questions, please feel free to reach out.

