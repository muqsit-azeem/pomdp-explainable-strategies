import re, os, sys
from collections import defaultdict

# Sample input DOT string
# dot_data = open("storm-mealy-machines/refuel-06-cutoffstrategy.dot").readlines()

# Function to parse DOT data and extract transitions
def parse_dot(dot_data):
	state_transitions = defaultdict(list)
	transition_outputs = defaultdict(list)
	
	# Regular expression to match transitions
	transition_pattern = re.compile(r'(?P<state>\d+)\s*->\s*(?P<nextstate>\d+)\s*\[label="\[(?P<input>[^\]]+)\]/\s*(?P<output>.*)\s*"\]')

	for line in dot_data:
		# print(line)
		for match in transition_pattern.finditer(line):
			current_state, next_state, obs, output = match.groups()
			output = output.strip()
			state_transitions[current_state].append((obs, next_state))
			transition_outputs[current_state].append((obs, output))
			# print (current_state, next_state, obs, output)
	return state_transitions, transition_outputs

def extract_valuations(input_string):
	# Define the regex pattern to extract the conditions
	pattern = re.compile(r'([\w\!]+)=?(\d+)?')
	# print("Input string:", input_string)
	
	# Find all matches
	matches = pattern.findall(input_string)
	
	valuations = []
	variables = []
	
	for match in matches:
		var, value = match
		if value != '':
			# For conditions with explicit values, use the value directly
			valuations.append(value)
			variables.append(var)
		else:
			# For boolean conditions like 'start' or '!start'
			if var.startswith('!'):
				valuations.append('0')
				variables.append(var[1:])
			else:
				valuations.append('1')
				variables.append(var)
		
	
	# Join the valuations with commas
	valuation_string = ','.join(valuations)
	# print(valuation_string)
	return valuation_string, variables

# print(state_transitions, transition_outputs)
# Function to print the tables
def print_tables(state_transitions, transition_outputs, fileNamePrefix):
	possible_outputs = []  # List to store unique outputs
	# os.makedirs(fileNamePrefix, exist_ok=True)
	memoryDir = os.path.join(fileNamePrefix, "memory-transitions")
	schedulerDir = os.path.join(fileNamePrefix, "schedulers")
	os.makedirs(memoryDir, exist_ok=True)
	os.makedirs(schedulerDir, exist_ok=True)
	
	for state in state_transitions:
		print(f"State {state}:")
		# print("Input to Next State:")
		s = ""
		for obs, next_state in state_transitions[state]:
			print(f"{obs},{next_state}")
			print(f"{extract_valuations(obs)},{next_state}")
			values, variables = extract_valuations(obs)
			s += f"{values},{next_state}\n"
		s = f"#PERMISSIVE\nBEGIN {values.count(',') + 1} 1\n{s}"
		csv_file = open(f"{memoryDir}/{state}.csv", "w")
		print(s, file=csv_file)
		# print()
		
		s = ""
		# print("Input to Output:")
		for obs, output in transition_outputs[state]:
			# Check if output is in the list of possible outputs
			if output == "":
				pass 
			else:
				if output not in possible_outputs:
					possible_outputs.append(output)
				output_index = possible_outputs.index(output)
				values, variables = extract_valuations(obs)
				s += f"{values},{output_index}\n"
			# print(f"{extract_valuations(obs)},{output_index}")
		# print()
		s = f"#PERMISSIVE\nBEGIN {values.count(',') + 1} 1\n{s}"
		csv_file = open(f"{schedulerDir}/{state}.csv", "w")
		print(s, file=csv_file)
		# print(variables)

	# print("Possible Outputs List:")
	actionMappingFile = open(f"{fileNamePrefix}/action_mapping.txt", "w")
	for index, output in enumerate(possible_outputs):
		# print(f"{index}: {output}")
		print(f"{output} <-> {index}", file=actionMappingFile)

	observationFile = open(f"{fileNamePrefix}/ordered_observations.txt", "w")
	for var in variables:
		print(var, file=observationFile)


# # Parse the DOT data
# state_transitions, transition_outputs = parse_dot(dot_data)

# # Print the tables
# print_tables(state_transitions, transition_outputs)

def createCSVs(dotFile,explainableFSCDir):
	dot_data = open(dotFile).readlines()
	fileNamePrefix = os.path.basename(dotFile).split('.')[0]
	fileNamePrefix = os.path.join(explainableFSCDir, fileNamePrefix)
	state_transitions, transition_outputs = parse_dot(dot_data)
	print_tables(state_transitions, transition_outputs, fileNamePrefix)

if __name__ == "__main__":
	baseDir = sys.argv[1]
	dotDir = os.path.join(baseDir, "storm-mealy-machines")
	explainableFSCDir = os.path.join(baseDir, "explainable-fsc")
	os.makedirs(dotDir, exist_ok=True)
	os.makedirs(explainableFSCDir, exist_ok=True)
	dotFiles = [f for f in os.listdir(dotDir) if f.endswith('.dot')] #-cutoffstrategy
	for dotFile in dotFiles:
		createCSVs(f"{dotDir}/{dotFile}", explainableFSCDir)
	# createCSVs("storm-mealy-machines/refuel-06-cutoffstrategy.dot")
