# Supplementary experimental data for the submission 7108: "Explainable Finite-Memory Policies for Partially Observable Markov Decision Processes"

## Directory Structure

```bash
pomdp-explainable-policy/
├── qualitative/
│   ├── paper-case-studies-iterative/
│   │   ├── create_table2_csv_table_size.py
│   │   ├── create_table_case_studies_vanilla.py
│   │   ├── postprocess_case_studies_vanilla.py
│   │   ├── run_all.py
│   │   ├── run_all.sh
│   │   ├── run_dtcontrol_case_studies_vanilla.py
│   │   └── run_storm_pomdp_explainable.py
│   ├── qualitative-benchmarks/
│   ├── skip-dt-fsc/
│   │   ├── create_table2_csv_table_size.py
│   │   ├── create_table_skip_iterative.py
│   │   ├── postprocess_skip.py
│   │   ├── run_all.py
│   │   ├── run_all.sh
│   │   ├── run_dtcontrol_iterative_skip.py
│   │   └── run_storm_pomdp_explainable.py
│   └── vanilla-dt-fsc/
│       ├── create_table2_csv_table_size.py
│       ├── create_table_vanilla_iterative.py
│       ├── postprocess_vanilla.py
│       ├── run_all.py
│       ├── run_all.sh
│       ├── run_dtcontrol_iterative_vanilla.py
│       └── run_storm_pomdp_explainable.py
├── quantitative/
│   ├── benchmarks/
│   ├── paper-case-study-heart/
│   ├── storm-fsc-output/
│   ├── create_table2_csv_table_size_storm.py
│   ├── create_table_storm.py
│   ├── postprocess_quantitive.py
│   ├── process_storm_output.py
│   ├── run_dtcontrol_quantitative.py
│   └── run_quantitative.sh
└── storm/
```


# Qualitative
1. `qualitative-benchmarks`
1. **DT-FSC for qualitative benchmarks (Iterative SAT-based Method)**: The files generated using the iterative method.
  a. explainable DT-FSC in `explainable-mealy-machine` folder
  b. storm fsc output in the form of csv table can be found in  `explainable-mealy-machine`
3. **Skip DT-FSC for qualitative benchmarks (Iterative SAT-based Method)**: The files generated using the Skip DT-FSC method.


# Quantitative
1. `storm-fsc-output`: This folder contains `.dot` file resulted from TACAS 24 approach.
2. Benchmarks are in the folder `benchmarks`: contains all the benchmarks from TACAS 24 paper
3. **DT-FSC for quantitative benchmarks (General approach)**: The files generated using a general case with a cutoff strategy.


Specific Python scripts to generate the corresponding tables.

This repository contains `.dot` file results from `iterative` and `quantitative` approaches  to Decision Tree equipped Finite State Controllers (DT-FSC):


# DT-FSC for Almost sure reachability with iterative SAT-based approach

This section provides details for benchmarks related to the iterative DT-FSC method.

- The benchmarks are in the directory `pomdp-benchmark-Xstrat/`. For each benchmark, there is a PRISM model file, we check the same propery `notbad U goal` for all the models.
- The FSCs (mealy machine in the form of tables) are in the directory `iterative/storm-mealy-machines/`.
- The DT-FSCs are in the directory `iterative/explainable-dt-fsc-results/`.

### Generate Experimental results
To obtain the results from iterative DT-FSC data, use the following command:
```bash
./create_table_vanilla_dt_fsc.sh iterative
```
This will create a directory `vanilla-dt-fsc/explainable-fsc-results` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Skip DT-FSC for Almost sure reachability with iterative SAT-based approach

This section provides details for benchmarks related to the Skip DT-FSC method.

- The benchmarks are the same `pomdp-benchmark-Xstrat/`. For each benchmark, there is a PRISM model file, we check the same propery `notbad U goal` for all the models.
- The FSCs (mealy machine in the form of tables) are in the directory `iterative/storm-mealy-machines/`.
- The skip-DT-FSCs are in the directory `iterative/explainable-skip-dt-fsc-results/`.

### Generate Experimental Results
To obtain the results from iterative Skip-DT-FSC data, use the following command:
```bash
./create_table_skip_dt_fsc.sh iterative
```
This will create a directory `iterative/explainable-skip-dt-fsc-results` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Quantitative Models Benchmarks

See the readme file in the directory `quantitative` for more details.

- The benchmarks are in the directory `quantitative/benchmarks/`. In each benchmark folder, there is a PRISM or explicit DRN model file and a properties file.
- The FSCs are in the directory `quantitative/storm-mealy-machines/`.
- The DT-FSCs are in the directory `quantitative/explainable-fsc-results/`.

### Generate Experimental Results
To rerun the experiments, use the following command:
```bash
./run_quantitative.sh quantitative
```
This will create a directory `quantitative/explainable-fsc` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Heart Disease Case Study
See the readme file in the directory `quantitative/heart` for more details.

- The PRISM model file: `heart-disease.prism`
- The FSC generated: `quantitative/heart/storm-mealy-machines/heart-disease.dot`
- The DT-FSC: `quantitative/heart/explainable-fsc-results/heart-disease`

### Running the Experiments

To rerun the experiments, use the following command:
```bash
./run_quantitative.sh quantitative/paper-case-study-paper-case-study-heart
```
This will create a directory `quantitative/heart/explainable-fsc` with the DT-FSCs for the heart disease case study and also print the results in the terminal.

# Maze

- The PRISM model file: `maze.nm`
- The FSC generated: `Illustrative-example/storm-mealy-machines`
- The DT-FSC: `Illustrative-example/explainable-fsc-results`


Due to limited artifact size, we only provide already generated results here that generates the experimental data presented in the submitted paper. Further, we provide a public anonymous link to a docker image with detailed instruction where one can download and run all the different approaches.

## Docker Image

For a pre-configured environment that includes all necessary dependencies and scripts, you can use the Docker image available on Zenodo:

- **Zenodo Link**: [10.5281/zenodo.13340154](https://doi.org/10.5281/zenodo.13340155)

This Docker image ensures a consistent and replicable environment for running the scripts and generating the tables.

