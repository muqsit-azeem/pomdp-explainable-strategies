
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
- **Description:** Contains scripts for generating DT-FSCs.
- **Generated Files:**
  - DT-FSCs (explainable Mealy machines) and corresponding results.
 
### 3. **Skip DT-FSC for all Qualitative Benchmarks**
- **Directory:** `skip-dt-fsc/`
- **Description:** Contains scripts for generating Skip DT-FSCs using the iterative SAT-based method.
- **Generated Files:**
  - Skip DT-FSCs (explainable Mealy machines with skip) and corresponding results.

## Quantitative Analysis

### 1. **General Quantitative Benchmarks**
- **Directory:** `benchmarks/`
- **Description:** Contains benchmarks and scripts for quantitative analysis, focusing on general cases with a cutoff strategy.
- **Generated Files:**
  - FSCs (Tabular format) and DT-FSCs for each benchmark.

### 2. **Heart Disease Case Study**
- **Directory:** `paper-case-study-heart/`
- **Description:** Specific case study focusing on heart disease, with related benchmarks and results.
- **Generated Files:**
  - FSCs (Tabular format), and DT-FSCs for the heart disease study.

### 3. **Storm FSC Output**
- **Directory:** `storm-fsc-output/`
- **Description:** Contains output files from the Bork et. al. (TACAS 24) approach, including \`.dot\` files representing FSCs.

## Running the Experiments

### Qualitative DT-FSC Generation
To generate DT-FSCs, Skip DT-FSCs for qualitative benchmarks, in the respective folder, do:
```bash
./run_all.sh
```

## Case Study Maze and Refuel(6,6)
To generate DT-FSCs, in ```paper-case-studies-qualitative```:
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



## Docker Artifact

To facilitate a consistent and replicable environment, we provide a pre-configured Docker artifact available on Zenodo. This artifact includes all necessary dependencies and scripts required to reproduce the experiments described in this repository.

### Prerequisites

Ensure that Docker is installed on your system. You can download and install Docker from the [official website](https://www.docker.com/get-started).

### Steps to Use the Docker Artifact

1. **Download the Docker Artifact**

   You can access the Docker artifact using the following Zenodo link:

   - **Zenodo Link:** [10.5281/zenodo.13340155](https://doi.org/10.5281/zenodo.13340155)

   Download the artifact and follow the instructions provided on the Zenodo page to load it into Docker.

2. **Load the Docker Image**

   After downloading the Docker artifact, load it into Docker using:

   ```bash
   docker load pomdp-dt-fsc.tar
   ```


3. **Run the Docker Container**

   Run a Docker container in interactive mode from the loaded image:

   ```bash
   docker run -it pomdp-dt-fsc:lastest /bin/bash
   ```


4. **Navigate to the Working Directory**

   Once inside the container, navigate to the directory where the project files are located:

   ```bash
   cd pomdp-explainable-policy/
   ```

5. **Run the Experiments**

   Follow the instructions provided in the "Running the Experiments" section of this README to execute the scripts for qualitative or quantitative benchmarks.

   For example, to run all qualitative DT-FSC generation scripts:

   ```bash
   ./run_all.sh
   ```

6. **Exit the Docker Container**

   After completing the experiments, you can exit the Docker container by typing:

   ```bash
   exit
   ```

### Mounting Local Directories

If you wish to save output files directly to your local machine, you can mount a local directory to the Docker container. Use the following command to start the container with a mounted directory:

```bash
docker run -it -v /local/path/to/your/data:/container/path your-loaded-image-name /bin/bash
```

Replace `/local/path/to/your/data` with the path on your local machine and `/container/path` with the desired path inside the container.




