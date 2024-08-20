# Supplementary Experimental Data for Submission 7108: "Explainable Finite-Memory Policies for Partially Observable Markov Decision Processes"

This repository contains supplementary experimental data and scripts related to the paper submission 7108. The repository is organized into directories for qualitative and quantitative analyses, each containing relevant benchmarks, scripts to generate the results.

## Directory Structure

```bash
pomdp-explainable-policy/
├── qualitative/
│   ├── paper-case-studies-iterative/
│   │   ├── create_table2_csv_table_size.py
│   │   ├── create_table_case_studies_vanilla.py
│   │   └── explainable-mealy-machines/
│   ├── qualitative-benchmarks/
│   ├── skip-dt-fsc/
│   │   ├── create_table2_csv_table_size.py
│   │   ├── create_table_skip_iterative.py
│   │   └── explainable-mealy-machines/
│   └── basic-dt-fsc/
│       ├── create_table_vanilla_iterative.py
│       └── explainable-skip-mealy-machines/
├── quantitative/
│   ├── benchmarks/
│   ├── paper-case-study-heart/
│   ├── storm-fsc-output/
│   ├── create_table2_csv_table_size_storm.py
│   └── explainable-mealy-machine/
└── storm/
```

## Data Files
For respective analysis (Qualitative/Quantitative), for each benchmark, the folder ```explainable-mealy-machines/``` has two sub-folders. ```schedulers``` and ```memory-transitions```.
- **FSCs (Mealy Machines Tabular Format):** 
   - For each *reachable* node i in the FSC, ```schedulers/``` contains the corresponding stationary-policy ```i.csv``` in tabular format.
   - For each *reachable* node i in the FSC, ```memory-transitions/``` contains the corresponding transitions ```i.csv``` in tabular format.
- **DT-FSCs/skip-DT-FSC (Explainable Mealy Machines):**
  - For each *reachable* node i in the FSC, ```schedulers/``` contains the corresponding explainable-stationary-policy ```i/default.dot``` as DT.
  - For each *reachable* node i in the FSC, ```memory-transitions/``` contains the corresponding explainable-transitions ```i/default.dot``` as DT.
- **Storm FSC Output (Bork et. al. Approach):**
    - The ```storm-fsc-output/``` directory contains the output files from [1] representing FSCs.

## Qualitative Analysis

- **Benchmarks Directory:** `qualitative/qualitative-benchmarks/`
- **Description:** Contains benchmarks and scripts for qualitative analysis using iterative SAT-based method.
- **Generated Files:** FSCs (Tabular format), DT-FSCs, and skip-DT-FSCs.

### 1. **DT-FSC for Paper Case Studies (Qualitative - Iterative SAT-based Method)**
- **Directory:** `qualitative/paper-case-studies-iterative/`
- **Description:** Contains scripts for generating tables of DT-FSCs for the data in ```explainable-mealy-machines/```.
- **Data Files:** FSCs (Tabular format) and DT-FSCs (explainable Mealy machines).

### 2. **DT-FSC for all Qualitative Benchmarks**
- **Directory:** `qualitative/basic-dt-fsc/`
- **Description:** Contains scripts for generating tables of DT-FSCs for the data in ```explainable-mealy-machines/```
- **Data Files:** FSCs (Tabular format) and DT-FSCs (explainable Mealy machines).
 
### 3. **Skip DT-FSC for all Qualitative Benchmarks**
- **Directory:** `qualitative/skip-dt-fsc/`
- **Description:** Contains scripts for generating tables of DT-FSCs for the data in ```explainable-skip-mealy-machines/```
- **Data Files:** FSCs (Tabular format) and Skip-DT-FSCs (explainable Skip Mealy machines).

## Quantitative Analysis

- **Benchmarks Directory:** `quantitative/benchmarks/`
- **Description:** Contains benchmarks and scripts for quantitative analysis, focusing on general cases with a cutoff strategy.
- **Generated Files:** FSCs (Tabular format) and DT-FSCs for each benchmark.

### 1. **Heart Disease Case Study**
- **Directory:** `quantitative/paper-case-study-heart/`
- **Description:** Specific case study focusing on heart disease, with related benchmarks and results.
- **Generated Files:** FSCs (Tabular format), and DT-FSCs (explainable Mealy machines) for the heart disease study.

### 2. **Storm FSC Output**
- **Directory:** `storm-fsc-output/`
- **Description:** Contains output files from the approach [1], including `.dot` files representing FSCs.


## Generating Tables

### Qualitative DT-FSC Generation
To create the table for #DT-nodes for all the benchmarks from the paper (Table 1):
```bash
cd qualitative/basic-dt-fsc
python create_table_basic_iterative.py .
```

To create the table for #Rows for all the benchmarks from the paper (Table 1):
```bash
cd qualitative/basic-dt-fsc
python create_table2_csv_table_size.py .
```


### Qualitative Skip-DT-FSC Generation
To create the table for #DT-nodes for all the benchmarks from the paper (Table 2):
```bash
cd qualitative/skip-dt-fsc
python create_table_skip_iterative.py .
```


## Case Study Maze and Refuel(6,6)
To create the table for #DT-nodes for the qualitative case studies from the paper:
```bash
cd qualitative/paper-case-studies-qualitative
python create_table_case_studies_basic.py .
```

To create the table for #Rows for the qualitative case studies from the paper:
```bash
cd qualitative/paper-case-studies-qualitative
python create_table2_csv_table_size.py .
```

### Quantitative Benchmark Execution
To create the table for #DT-nodes for all the benchmarks from the paper (Table 4):
```bash
cd quantitative
python create_table_storm.py .
```

To create the table for #Rows for all the benchmarks from the paper (Table 4):
```bash
cd quantitative
python create_table2_csv_table_size_storm.py
```

## Heart Disease Case Study
To create the table for #DT-nodes for the heart disease case study:
```bash
cd quantitative
python create_table_storm.py paper-case-study-heart
```

## Heart Disease Case Study
To create the table for #DT-nodes for the heart disease case study:
```bash
cd quantitative
python create_table2_csv_table_size_storm.py paper-case-study-heart
```

[1] Bork, A. N., Chakraborty, D., Grover, K., Mohr, S., & Kretinsky, J. (2023). Artifact for Paper: Learning Explainable and Better Performing Representations of POMDP Strategies. Zenodo. https://doi.org/10.5281/zenodo.10437018



# Docker Artifact

To facilitate a consistent and replicable environment, we provide a pre-configured Docker artifact available on Zenodo. This artifact includes all necessary dependencies and scripts required to reproduce the experiments described in this repository. You can access the Docker artifact using the following Zenodo link:

- **Zenodo Link:** [10.5281/zenodo.13340154](https://doi.org/10.5281/zenodo.13340154)

Download the artifact and follow the instructions provided on the Zenodo page to load it into Docker.
