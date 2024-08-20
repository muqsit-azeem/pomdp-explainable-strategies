
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

## Qualitative Analysis

- **Benchmarks Directory:** `qualitative-benchmarks/`
- **Description:** Contains benchmarks and scripts for qualitative analysis using iterative SAT-based method.
- **Generated Files:** FSCs (Tabular format), DT-FSCs, and skip-DT-FSCs.

### 1. **DT-FSC for Paper Case Studies (Qualitative - Iterative SAT-based Method)**
- **Directory:** `paper-case-studies-iterative/`
- **Description:** Contains scripts for generating tables of DT-FSCs for the data in ```explainable-mealy-machines/```.
- **Data Files:** FSCs (Tabular format) and DT-FSCs (explainable Mealy machines).

### 2. **DT-FSC for all Qualitative Benchmarks**
- **Directory:** `basic-dt-fsc/`
- **Description:** Contains scripts for generating tables of DT-FSCs for the data in ```explainable-mealy-machines/```
- **Data Files:** FSCs (Tabular format) and DT-FSCs (explainable Mealy machines).
 
### 3. **Skip DT-FSC for all Qualitative Benchmarks**
- **Directory:** `skip-dt-fsc/`
- **Description:** Contains scripts for generating tables of DT-FSCs for the data in ```explainable-skip-mealy-machines/```
- **Data Files:** FSCs (Tabular format) and Skip-DT-FSCs (explainable Skip Mealy machines).

## Quantitative Analysis

- **Benchmarks Directory:** `benchmarks/`
- **Description:** Contains benchmarks and scripts for quantitative analysis, focusing on general cases with a cutoff strategy.
- **Generated Files:** FSCs (Tabular format) and DT-FSCs for each benchmark.

### 1. **Heart Disease Case Study**
- **Directory:** `paper-case-study-heart/`
- **Description:** Specific case study focusing on heart disease, with related benchmarks and results.
- **Generated Files:** FSCs (Tabular format), and DT-FSCs (explainable Mealy machines) for the heart disease study.

### 2. **Storm FSC Output**
- **Directory:** `storm-fsc-output/`
- **Description:** Contains output files from the Bork et. al. (TACAS 24) approach, including \`.dot\` files representing FSCs.


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
cd paper-case-studies-qualitative
python create_table_case_studies_basic.py .
```

To create the table for #Rows for the qualitative case studies from the paper:
```bash
cd paper-case-studies-qualitative
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



# Docker Artifact

To facilitate a consistent and replicable environment, we provide a pre-configured Docker artifact available on Zenodo. This artifact includes all necessary dependencies and scripts required to reproduce the experiments described in this repository.

### Prerequisites

Ensure that Docker is installed on your system. You can download and install Docker from the [official website](https://www.docker.com/get-started).

### Steps to Use the Docker Artifact

1. **Download the Docker Artifact**

   You can access the Docker artifact using the following Zenodo link:

   - **Zenodo Link:** [10.5281/zenodo.13340154](https://doi.org/10.5281/zenodo.13340154)

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

   Follow the instructions provided in the "Running the Experiments" section of the ```README``` in ```pomdp-explainable-policy/``` to execute the scripts for qualitative or quantitative benchmarks.

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




