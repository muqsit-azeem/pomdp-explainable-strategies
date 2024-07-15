import os
import sys

def read_model_hash(wr_file_path):
    with open(wr_file_path, 'r') as file:
        lines = file.readlines()
        for line in lines:
            if line.startswith("model hash:"):
                return line.split(":")[1].strip()
    return None

def process_model_files(model_hash, base_dir):
    model_hash_dir = os.path.join(base_dir, model_hash)
    if not os.path.exists(model_hash_dir):
        print(f"Directory for model hash {model_hash} does not exist: {model_hash_dir}", file=sys.stderr)
        return

    schedulers_dir = os.path.join(model_hash_dir, "schedulers")
    if not os.path.exists(schedulers_dir):
        print(f"Schedulers directory does not exist: {schedulers_dir}", file=sys.stderr)
        return

    for filename in os.listdir(schedulers_dir):
        if filename.endswith(".csv"):
            csv_path = os.path.join(schedulers_dir, filename)
            print(f"Processing {csv_path}")
            # TODO: what to do when processing?
            with open(csv_path, 'r') as csv_file:
                content = csv_file.read()
                print(content)

def main(base_dir):
    winningregion_dir = os.path.join(base_dir, "winningregion")
    if not os.path.exists(winningregion_dir):
        print(f"Winning region directory does not exist: {winningregion_dir}", file=sys.stderr)
        sys.exit(1)

    for filename in os.listdir(winningregion_dir):
        if filename.endswith(".wr"):
            wr_file_path = os.path.join(winningregion_dir, filename)
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
