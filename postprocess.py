import os
import re

# hardcoding paths for now
action_mapping_path = "action_mapping.txt"
ordered_observation_path = "ordered_observations.txt"
# decision_trees_dir = "../decision_trees/default"
decision_trees_dir = "default"

# action mapping dictionary
action_mapping = {}
with open(action_mapping_path, "r") as f:
    for line in f:
        action, number = line.strip().split(" <-> ")
        action_mapping[number] = action


# observation mapping list
observation_mapping = []
with open(ordered_observation_path, "r") as f:
    observation_mapping = [line.strip() for line in f]


# Function to replace action numbers with action names in a .dot file
def replace_actions_and_observations(dot_file_path, action_mapping, observation_mapping):
    with open(dot_file_path, "r") as file:
        content = file.read()

    # replace numbers with corresponding action names
    for number, action in action_mapping.items():
        content = re.sub(rf'(?<=\[label="){number}(?="])', action, content)

    # Replace x_i with corresponding observations
    for i, obs in enumerate(observation_mapping):
        # the first one is for memory therefore observations start at x_1
        print (f"replacing x_{i+1} by {obs}")
        content = content.replace(f"x_{i+1}", obs)

    with open(dot_file_path, "w") as file:
        file.write(content)


# Iterate through the directories and files
for root, dirs, files in os.walk(decision_trees_dir):
    for file in files:
        if file.endswith(".dot"):
            dot_file_path = os.path.join(root, file)
            replace_actions_and_observations(dot_file_path, action_mapping, observation_mapping)
