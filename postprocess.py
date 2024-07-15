import os
import re

# hardcoding paths for now
action_mapping_path = "action_mapping.txt"
decision_trees_dir = "../decision_trees/default"

# action mapping dictionary
action_mapping = {}
with open(action_mapping_path, "r") as f:
    for line in f:
        action, number = line.strip().split(" <-> ")
        action_mapping[number] = action

# Function to replace action numbers with action names in a .dot file
def replace_actions(dot_file_path, action_mapping):
    with open(dot_file_path, "r") as file:
        content = file.read()

    # replace numbers with corresponding action names
    for number, action in action_mapping.items():
        content = re.sub(rf'(?<=\[label="){number}(?="])', action, content)

    with open(dot_file_path, "w") as file:
        file.write(content)

# Iterate through the directories and files
for root, dirs, files in os.walk(decision_trees_dir):
    for file in files:
        if file.endswith(".dot"):
            dot_file_path = os.path.join(root, file)
            replace_actions(dot_file_path, action_mapping)
