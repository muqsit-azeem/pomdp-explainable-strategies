import os
import sys
import re


# action mapping to dictionary
def read_action_mapping(action_mapping_path):
    print(f"Reading action mapping from {action_mapping_path}")
    action_mapping = {}
    with open(action_mapping_path, "r") as f:
        for line in f:
            action, number = line.strip().split(" <-> ")
            action_mapping[number] = action
    return action_mapping


# observation mapping to list
def read_observation_mapping(observation_mapping_path):
    print(f"Reading observation mapping from {observation_mapping_path}")
    with open(observation_mapping_path, "r") as f:
        observation_mapping = [line.strip() for line in f]
    return observation_mapping


# model hash for dt directory
def read_model_hash(wr_file_path):
    print(f"Reading model hash from {wr_file_path}")
    with open(wr_file_path, 'r') as file:
        lines = file.readlines()
        for line in lines:
            if line.startswith("model hash:"):
                return line.split(":")[1].strip()
    return None


# replace action numbers with action names and x_i with observations in corresponding .dot file
def replace_actions_and_observations(dot_file_path, action_mapping, observation_mapping):
    if not os.path.exists(dot_file_path):
        print(f"Dot file does not exist: {dot_file_path}", file=sys.stderr)
        return

    print(f"Reading {dot_file_path}")
    with open(dot_file_path, "r") as file:
        content = file.read()

    print(f"\nOriginal content of {dot_file_path}:\n{content}\n")

    # replace action numbers with corresponding action names
    for number, action in action_mapping.items():
        pattern = rf'(?<=label="){number}(?=")'
        new_content = re.sub(pattern, action, content)
        if new_content != content:
            print(f"Replaced action {number} with {action} in {dot_file_path}")
        content = new_content

    # replace x_i with corresponding observations
    for i, obs in enumerate(observation_mapping):
        # the first one is for memory therefore observations start at x_1
        placeholder = f"x_{i + 1} "
        new_content = content.replace(placeholder, f"{obs} ")
        if new_content != content:
            print(f"Replaced {placeholder} with {obs} in {dot_file_path}")
        content = new_content

    print(f"\nModified content of {dot_file_path}:\n{content}\n")

    with open(dot_file_path, "w") as file:
        file.write(content)


def process_dt_files(model_hash, base_dir):
    model_hash_dir = os.path.join(base_dir, model_hash)
    if not os.path.exists(model_hash_dir):
        print(f"DT scheduler directory for model hash {model_hash} does not exist: {model_hash_dir}", file=sys.stderr)
        return

    action_mapping_path = os.path.join(model_hash_dir, "action_mapping.txt")
    observation_mapping_path = os.path.join(model_hash_dir, "ordered_observations.txt")

    if not os.path.exists(action_mapping_path):
        print(f"Action mapping file does not exist: {action_mapping_path}", file=sys.stderr)
        return

    if not os.path.exists(observation_mapping_path):
        print(f"Observation mapping file does not exist: {observation_mapping_path}", file=sys.stderr)
        return

    action_mapping = read_action_mapping(action_mapping_path)
    observation_mapping = read_observation_mapping(observation_mapping_path)

    # print(f"Action mapping: {action_mapping}")
    # print(f"Observation mapping: {observation_mapping}")

    dts_dir = os.path.join(model_hash_dir, "schedulers", "default")
    if not os.path.exists(dts_dir):
        print(f"DT schedulers directory does not exist: {dts_dir}", file=sys.stderr)
        return

    # Iterate through the directories and files
    for root, dirs, files in os.walk(dts_dir):
        for file in files:
            if file.endswith(".dot"):
                dot_file_path = os.path.join(root, file)
                print(f"Processing {dot_file_path}")
                replace_actions_and_observations(dot_file_path, action_mapping, observation_mapping)

    mem_transition_dir = os.path.join(model_hash_dir, "memory-transitions", "default")
    if not os.path.exists(dts_dir):
        print(f"DT schedulers directory does not exist: {mem_transition_dir}", file=sys.stderr)
        return

    # Iterate through the directories and files
    for root, dirs, files in os.walk(mem_transition_dir):
        for file in files:
            if file.endswith(".dot"):
                dot_file_path = os.path.join(root, file)
                print(f"Processing {dot_file_path}")
                # only replace observations
                replace_actions_and_observations(dot_file_path, {}, observation_mapping)


def main(base_dir):
    print(f"Checking winning region directory in {base_dir}")
    winningregion_dir = os.path.join(base_dir, "winningregion")
    if not os.path.exists(winningregion_dir):
        print(f"Winning region directory does not exist: {winningregion_dir}", file=sys.stderr)
        sys.exit(1)

    for filename in os.listdir(winningregion_dir):
        if filename.endswith(".wr"):
            wr_file_path = os.path.join(winningregion_dir, filename)
            # print(f"Reading model hash from {wr_file_path}")
            model_hash = read_model_hash(wr_file_path)
            if model_hash:
                print(f"Model hash: {model_hash}")
                process_dt_files(model_hash, base_dir)
            else:
                print(f"No model hash found in {wr_file_path}", file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} BASEDIR", file=sys.stderr)
        sys.exit(1)

    base_dir = sys.argv[1]
    main(base_dir)
