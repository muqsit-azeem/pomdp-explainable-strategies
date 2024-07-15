import os
import subprocess
import sys


def check_directory_exists(directory):
    if not os.path.exists(directory):
        print(f"{directory} not found", file=sys.stderr)
        sys.exit(1)
    if not os.path.isdir(directory):
        print(f"{directory} not a directory", file=sys.stderr)
        sys.exit(1)


def check_file_exists(file_path):
    if not os.path.exists(file_path):
        print(f"{file_path} not found", file=sys.stderr)
        sys.exit(1)


def read_model_hash(wr_file_path):
    with open(wr_file_path, 'r') as file:
        lines = file.readlines()
        for line in lines:
            if line.startswith("model hash:"):
                return line.split(":")[1].strip()
    return None


def run_dtcontrol(csv_path, output_file):
    try:
        command = f"dtcontrol --input {csv_path} --rerun --output {output_file}"
        print(f"Executing command: {command}")
        subprocess.run(command, shell=True, check=True, capture_output=True)
        print(f"Execution successful for {csv_path}")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed for {csv_path}")
        print(e.stderr.decode(), file=sys.stderr)


def process_model_files(model_hash, base_dir):
    model_hash_dir = os.path.join(base_dir, model_hash)
    if not os.path.exists(model_hash_dir):
        print(f"Directory for model hash {model_hash} does not exist: {model_hash_dir}", file=sys.stderr)
        return

    schedulers_dir = os.path.join(model_hash_dir, "schedulers")
    if not os.path.exists(schedulers_dir):
        print(f"Schedulers directory does not exist: {schedulers_dir}", file=sys.stderr)
        return

    transition_dir = os.path.join(model_hash_dir, "memory-transitions")
    if not os.path.exists(transition_dir):
        print(f"Schedulers directory does not exist: {transition_dir}", file=sys.stderr)
        return

    for filename in os.listdir(schedulers_dir):
        if filename.endswith(".csv"):
            csv_path = os.path.join(schedulers_dir, filename)
            print(f"Processing scheduler file: {csv_path}")
            run_dtcontrol(csv_path, schedulers_dir)

    for filename in os.listdir(transition_dir):
        if filename.endswith(".csv"):
            csv_path = os.path.join(transition_dir, filename)
            print(f"Processing transition file: {csv_path}")
            run_dtcontrol(csv_path, transition_dir)


def main(base_dir):
    winningregion_dir = os.path.join(base_dir, "winningregion")
    if not os.path.exists(winningregion_dir):
        print(f"Winning region directory does not exist: {winningregion_dir}", file=sys.stderr)
        sys.exit(1)

    for filename in os.listdir(winningregion_dir):
        if filename.endswith(".wr"):
            wr_file_path = os.path.join(winningregion_dir, filename)
            print(f"Reading model hash from {wr_file_path}")
            print(f"Reading model hash from {wr_file_path}")
            model_hash = read_model_hash(wr_file_path)
            if model_hash:
                print(f"Model hash: {model_hash}")
                process_model_files(model_hash, base_dir)
            else:
                print(f"No model hash found in {wr_file_path}", file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} BASEDIR", file=sys.stderr)
        sys.exit(1)

    base_dir = sys.argv[1]
    main(base_dir)

