import os
import subprocess
import sys


def check_directory_exists(directory):
    if not os.path.exists(directory):
        print(f"Directory {directory} not found", file=sys.stderr)
        sys.exit(1)
    if not os.path.isdir(directory):
        print(f"Directory{directory} not a directory", file=sys.stderr)
        sys.exit(1)


def run_command(command):
    try:
        print(f"Executing command: {command}")
        subprocess.run(command, shell=True, check=True, capture_output=True)
        print("Execution successful")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed: {e.stderr.decode()}", file=sys.stderr)
        sys.exit(1)


def activate_venv(venv_path):
    command = f"source {venv_path}"
    run_command(command)


def run_dtcontrol(csv_path, output_file):
    try:
        command = f"dtcontrol --input {csv_path} --rerun --output {output_file}"
        print(f"Executing command: {command}")
        subprocess.run(command, shell=True, check=True, capture_output=True)
        print(f"Execution successful for {csv_path}")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed for {csv_path}")
        print(e.stderr.decode(), file=sys.stderr)


def move_dts_from_default(benchmark_dir):
    try:
        command1 = f"mv {benchmark_dir}/memory-transitions/default/* {benchmark_dir}/memory-transitions;" \
                   f"rm -r {benchmark_dir}/memory-transitions/default;" \
                   f"mv {benchmark_dir}/schedulers/default/* {benchmark_dir}/schedulers;" \
                   f"rm -r {benchmark_dir}/schedulers/default"
        print(f"Executing command: {command1}")
        subprocess.run(command1, shell=True, check=True, capture_output=True)
        print(f"Execution successful for {benchmark_dir}")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed for {benchmark_dir}")
        print(e.stderr.decode(), file=sys.stderr)


def process_model_files(model_folder, venv_path):
    print(f"Activating venv: {venv_path}")
    activate_venv(venv_path)

    check_directory_exists(model_folder)

    schedulers_dir = os.path.join(model_folder, "schedulers")
    check_directory_exists(schedulers_dir)

    transition_dir = os.path.join(model_folder, "memory-transitions")
    check_directory_exists(transition_dir)

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


def main(base_dir, ven_path):
    winningregion_dir = os.path.join(base_dir, "winningregion")
    check_directory_exists(winningregion_dir)

    for filename in os.listdir(winningregion_dir):
        if filename.endswith(".wr"):
            wr_file_path = os.path.join(winningregion_dir, filename)
            print(f"winning region file: {wr_file_path}")
            last_dash = wr_file_path.rfind('-')
            if last_dash!=-1:
                benchmark_folder = wr_file_path[:last_dash]
                print(f"Benchmark folder: {benchmark_folder}")
                check_directory_exists(benchmark_folder)
                process_model_files(benchmark_folder, venv_path)
                move_dts_from_default(benchmark_folder)
            else:
                print(f"No benchmark folder found for {wr_file_path}", file=sys.stderr)


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} BASE_DIR VENV_PATH", file=sys.stderr)
        sys.exit(1)

    base_dir = sys.argv[1]
    venv_path = sys.argv[2]
    main(base_dir, venv_path)

