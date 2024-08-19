
# Supplementary Experimental Data for Submission 7108: "Explainable Finite-Memory Policies for Partially Observable Markov Decision Processes"

This repository contains supplementary experimental data and scripts related to the paper submission 7108. The repository is organized into directories for qualitative and quantitative analyses, each containing relevant benchmarks, scripts to generate the results.

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

## Qualitative Analysis

### 1. **DT-FSC for Paper Case Studies (Qualitative - Iterative SAT-based Method)**
- **Directory:** `paper-case-studies-iterative/`
- **Description:** Contains scripts for generating explainable DT-FSCs using the iterative SAT-based method.
- **Generated Files:**
  - DT-FSCs (explainable Mealy machines) and corresponding results.

### 2. **DT-FSC for all Qualitative Benchmarks**
- **Directory:** `vanilla-dt-fsc/`
- **Description:** Contains scripts and results for generating vanilla DT-FSCs.
- **Generated Files:**
  - DT-FSCs (explainable Mealy machines) and corresponding results.
 
### 3. **Skip DT-FSC for all Qualitative Benchmarks**
- **Directory:** `skip-dt-fsc/`
- **Description:** Contains scripts and results for generating Skip DT-FSCs using the iterative SAT-based method.
- **Generated Files:**
  - Skip DT-FSCs (explainable Mealy machines with skip) and corresponding results.

## Quantitative Analysis

### 1. **General Quantitative Benchmarks**
- **Directory:** `benchmarks/`
- **Description:** Contains benchmarks and scripts for quantitative analysis, focusing on general cases with a cutoff strategy.
- **Generated Files:**
  - FSCs and DT-FSCs for each benchmark.

### 2. **Heart Disease Case Study**
- **Directory:** `paper-case-study-heart/`
- **Description:** Specific case study focusing on heart disease, with related benchmarks and results.
- **Generated Files:**
  - PRISM models, FSCs, and DT-FSCs for the heart disease study.

### 3. **Storm FSC Output**
- **Directory:** `storm-fsc-output/`
- **Description:** Contains output files from the TACAS 24 approach, including \`.dot\` files representing FSCs.

## Running the Experiments

### Qualitative DT-FSC Generation
To generate DT-FSCs for qualitative benchmarks:
```bash
./run_all.sh
```

### Skip DT-FSC Generation
To generate Skip DT-FSCs for qualitative benchmarks:
```bash
./run_all.sh
```

### Quantitative Benchmark Execution
To run the quantitative benchmarks:
```bash
./run_quantitative.sh
```

## Heart Disease Case Study
To run the heart disease case study:
```bash
./run_quantitative.sh paper-case-study-heart
```

## Docker Image

For a pre-configured environment, use the Docker image available on Zenodo:

- **Zenodo Link:** [10.5281/zenodo.13340154](https://doi.org/10.5281/zenodo.13340155)

This Docker image includes all necessary dependencies and scripts to ensure a consistent and replicable environment.
