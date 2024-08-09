import re

data = open('heart_disease.v3.paynt.txt').read()
# actions = ["test1","surgery","Done","medicine"]

# Regex patterns
output_pattern = r'A\(\[(.*?)\],(.*?)\)=(.*)'
transition_pattern = r'M\(\[(.*?)\],(.*?)\)=(.*)'

# Initialize the dictionaries for states and transitions
outputs = {}
transitions = {}
actions = []

# Parse the input data
for line in data.strip().split('\n'):
	line = line.strip()
	output_match = re.match(output_pattern, line)
	transition_match = re.match(transition_pattern, line)
	
	if output_match:
		input_signal = output_match.group(1).strip()
		state = output_match.group(2).strip()
		output_signal = output_match.group(3).strip()
		outputs[(state, input_signal)] = output_signal
		if output_signal not in actions:
			actions.append(output_signal)

	elif transition_match:
		input_signal = transition_match.group(1).strip()
		state = transition_match.group(2).strip()
		next_state = transition_match.group(3).strip()
		transitions[(state, input_signal)] = next_state
		
# Write the DOT file
with open('heart_disease-paynt.dot', 'w') as f:
	f.write('digraph G {\n')
	for state, input_signal in outputs:
		output_signal = outputs[(state, input_signal)]
		if (state, input_signal) in transitions:
			next_state = transitions[(state, input_signal)]
		else:
			next_state = state
		f.write(f'  {state} -> {next_state} [label="[{input_signal}]/{output_signal}"];\n')
	for state, input_signal in transitions:
		if (state, input_signal) not in outputs:
			next_state = transitions[(state, input_signal)]
			f.write(f'  {state} -> {next_state} [label="[{input_signal}]/"];\n')
	f.write('}\n')

# print("state 0")
# for state, input_signal in transitions:
# 	if state == "0":
# 		if (state, input_signal) in outputs:
# 			next_state = transitions[(state, input_signal)]
# 			action = outputs[(state, input_signal)]
# 			print(f"{input_signal}: {action}, {next_state}")

# print("state 1")
# for state, input_signal in transitions:
# 	if state == "1":
# 		if (state, input_signal) in outputs:
# 			next_state = transitions[(state, input_signal)]
# 			action = outputs[(state, input_signal)]
# 			print(f"{input_signal}: {action}, {next_state}")

# action0 = []
# transition0 = []

# action0csv = open('action0.csv','w')
# transition0csv = open('transition0.csv','w')
# action1csv = open('action1.csv','w')
# transition1csv = open('transition1.csv','w')


# print("state 0")
# for state, input_signal in outputs:
# 	if state == "0":
# 		if (state, input_signal) in transitions:
# 			next_state = transitions[(state, input_signal)]
# 		else:
# 			next_state = state
# 		action = outputs[(state, input_signal)]
# 		print(f"{input_signal}: {action}, {next_state}")
# 		s = input_signal.split('\t& ')
# 		ss = ""
# 		for v in s:
# 			if '=' in v:
# 				v = v.split('=')
# 				v = (v[0], v[1])
# 			elif '!' in v:
# 				v = (v[1:],0)
# 			else:
# 				v = (v,1)
# 			# print(v)
# 			ss += str(v[1])+","
# 		# print(ss)
# 		ss+=str(actions.index(action))
# 		print(ss, file=action0csv)
# 		# print(s)

# print("\nstate 1")
# for state, input_signal in transitions:
# 	if state == "1":
# 		if (state, input_signal) in transitions:
# 			next_state = transitions[(state, input_signal)]
# 		else:
# 			next_state = state
# 		action = outputs[(state, input_signal)]
# 		print(f"{input_signal}: {action}, {next_state}")
