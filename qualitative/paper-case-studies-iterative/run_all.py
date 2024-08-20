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
        # Use Popen to capture output in real-time
        process = subprocess.Popen(command, shell=True, stdout=sys.stdout, stderr=sys.stderr, universal_newlines=True)
        process.communicate()
        if process.returncode != 0:
            raise subprocess.CalledProcessError(process.returncode, command)
        print("Execution successful")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed: {e}", file=sys.stderr)
        sys.exit(1)


def run_storm_pomdp(timeout, storm_pomdp_exe, input_file, params_dict):
    command = f"python3 -u run_storm_pomdp_explainable.py {timeout} {storm_pomdp_exe} {input_file} \"{params_dict}\""
    print(f"Running command: {command}")
    run_command(command)


def run_dtcontrol(base_dir):
    command = f"python3 -u run_dtcontrol_case_studies_basic.py {base_dir}"
    run_command(command)


def postprocess(base_dir):
    command = f"python3 -u postprocess_case_studies_basic.py {base_dir}"
    run_command(command)


def create_table(base_dir):
    command = f"python3 -u create_table_case_studies_basic.py {base_dir} latex"
    run_command(command)


def create_table2(base_dir):
    command = f"python3 -u create_table2_csv_table_size.py {base_dir} latex"
    run_command(command)


def main():
    if len(sys.argv) > 2:
        print(f"Usage: {sys.argv[0]} STORMBUILDDIR MODELSDIR TIMEOUT", file=sys.stderr)
        sys.exit(1)

    storm_build_dir = os.path.join(os.getcwd(), "../../storm/build")
    model_dir = os.path.join(os.getcwd(), "../qualitative-benchmarks")
    timeout = 10000

    check_directory_exists(storm_build_dir)
    check_directory_exists(model_dir)
    create_directory_if_not_exists("explainable-mealy-machines")
    create_directory_if_not_exists("logs")

    benchmarks = [
        ("maze.nm", {}),
        ("refuel.nm", {"N": 6, "ENERGY": 6})
    ]

    for model, params in benchmarks:
        input_file_path = os.path.join(model_dir, model)
        storm_pomdp_exec = os.path.join(storm_build_dir, "bin", "storm-pomdp")
        print("model: ", model, "params: ", params)
        run_storm_pomdp(timeout, storm_pomdp_exec, input_file_path, params)

    run_dtcontrol(os.getcwd())
    postprocess(os.getcwd())

    create_table(os.getcwd())
    create_table2(os.getcwd())
    print("All scripts ran successfully.")


if __name__ == "__main__":
    main()
