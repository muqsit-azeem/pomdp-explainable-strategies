import os
import subprocess
import sys


def check_directory_exists(directory):
    if not os.path.exists(directory):
        print(f"Directory {directory} not found", file=sys.stderr)
        sys.exit(1)
    if not os.path.isdir(directory):
        print(f"Directory {directory} not a directory", file=sys.stderr)
        sys.exit(1)


def create_directory_if_not_exists(directory):
    if not os.path.exists(directory):
        print(f"Directory {directory} not found. Creating directory.", file=sys.stderr)
        os.makedirs(directory)
    elif not os.path.isdir(directory):
        print(f"Directory {directory} exists but is not a directory", file=sys.stderr)
        sys.exit(1)


def check_file_exists(file_path):
    if not os.path.exists(file_path):
        print(f"File {file_path} not found", file=sys.stderr)
        sys.exit(1)


def run_command(command):
    try:
        print(f"Executing command: {command}")
        subprocess.run(command, shell=True, check=True, capture_output=True)
        print("Execution successful")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed: {e.stderr.decode()}", file=sys.stderr)
        sys.exit(1)


def run_storm_pomdp(storm_pomdp_exe, input_file, params_str, timeout=10000):
    command = f"python3 run_storm_pomdp_explainable.py {timeout} {storm_pomdp_exe} {input_file} {params_str}"
    print(f"Running command: {command}")
    run_command(command)


def run_dtcontrol(base_dir, venv_path):
    command = f"python3 run_dtcontrol.py {base_dir} {venv_path}"
    run_command(command)


def postprocess(base_dir):
    command = f"python3 postprocess.py {base_dir}"
    run_command(command)


def create_table(base_dir):
    command = f"python3 create_table.py {base_dir}"
    run_command(command)


def main():
    if len(sys.argv) > 2:
        print(f"Usage: {sys.argv[0]}", file=sys.stderr)
        sys.exit(1)

    # storm_build_dir = sys.argv[1]
    storm_build_dir = os.path.join(os.getcwd(), "storm/build")
    model_dir = os.path.join(os.getcwd(), "pomdp-benchmarks-XStrat")
    # virtual environment path
    venv_path = "./venv/bin/activate"
    timeout = 10000

    check_directory_exists(storm_build_dir)
    check_directory_exists(model_dir)
    create_directory_if_not_exists("winningregion")

    benchmarks = [
        ("meet-professor.nm", {}),
        # Uncomment and add other benchmarks here
        # ("maze-fancy-observations.nm", {}),
        # ("maze1.prism", {}),
        # ("obstacle.nm", {"N": 6}),
        # ("rocks2.nm", {"N": 6}),
        # ("avoid.nm", {"N": 6, "RADIUS": 3}),
        # ("evade.nm", {"N": 6, "RADIUS": 2}),
        # ("intercept.nm", {"N": 7, "RADIUS": 1}),
        # ("refuel.nm", {"N": 6, "ENERGY": 8}),
        # ("refuel-tiny.nm", {"N": 4, "ENERGY": 4}),
        # ("refuel-wierd.nm", {"N": 4, "ENERGY": 4}),
        # ("model2.prism", {"N": 6}),
        # ("model3.prism", {"N": 7, "RADIUS": 1}),
    ]

    for model, params in benchmarks:
        input_file_path = os.path.join(model_dir, model)
        storm_pomdp_exe = os.path.join(storm_build_dir, "bin", "storm-pomdp")
        print("params:", params)
        params_str = ""
        if params:
            params_str = "-const " + ",".join(f"{key}={value}" for key, value in params.items())
        run_storm_pomdp(timeout, storm_pomdp_exe, input_file_path, params_str)
        run_dtcontrol(os.getcwd(), venv_path)
        postprocess(os.getcwd())

    create_table(os.getcwd())
    print("All scripts ran successfully.")


if __name__ == "__main__":
    main()
