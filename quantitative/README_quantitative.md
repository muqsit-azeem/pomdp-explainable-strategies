# Quantitative Models Benchmarks

See the readme file in the directory `quantitative` for more details.

- The benchmarks are in the directory `quantitative/benchmarks/`. In each benchmark folder, there is a PRISM or explicit DRN model file and a properties file.
- The fscs are in the directory `quantitative/storm-mealy-machines/`.
- The DT-FSCs are in the directory `quantitative/explainable-fsc-results/`.

### Running the experiments
To rerun the experiments, use the following command:
```bash
./run_quantitative.sh quantitative
```
This will create a directory `quantitative/explainable-fsc` with the DT-FSCs for each benchmark and also print the results in the terminal.

# Heart Disease Case Study

See the readme file in the directory `quantitative/paper-case-study-heart` for more details.

- The PRISM file model : `heart-disease.prism`
- The FSC generated : `quantitative/heart/storm-mealy-machines/heart-disease.dot`
- The DT-FSCs : `quantitative/heart/explainable-fsc-results/heart-disease`

### Running the experiments

To rerun the experiments, use the following command:
```bash
./run_quantitative.sh quantitative/paper-case-study-paper-case-study-heart
```

This will create a directory `quantitative/heart/explainable-fsc` with the DT-FSCs for the heart disease case study and also print the results in the terminal.
