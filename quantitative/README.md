- run storm to get the mealy machines
- process the mealy machines to create the schedulers and the memory transitions csv files, action mapping and state valuations text files and the memory transitions graph
```python3
python3 process_storm_output.py storm-mealy-machines/refuel-06-cutoffstrategy.dot
```

- run dtcontrol and post process to get the results
```python3
python3 create_dts.py temp/refuel-06-cutoffstrategy/
```