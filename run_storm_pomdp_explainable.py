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


def run_storm_pomdp(timeout_command, storm_pomdp, model_dir, model, params=None):
    const_str = ""
    if params:
        const_str = "-const " + ",".join(f"{key}={value}" for key, value in params.items())

    command = [
        timeout_command, storm_pomdp,
        "--prism", f"{model_dir}/{model}",
        '--prop', '"Pmax=? [\\"notbad\\" U \\"goal\\"]"',
        # '--prop', '"Pmax=? [!\\"bad\\" U \\"goal\\"]"',
        const_str,
        "--buildstateval",
        "--buildobsval",
        "--build-all-labels",
        "--qualitative-analysis",
        "--memlesssearch", "iterative",
        "--pomdpQualitative:nographprocessing ",
        "-stats",
        "--trace",
        "--winningregion",
        "--exportwinningregion",
        f"winningregion/{model.split('.')[0]}-fixpoint.wr"
    ]

    command_str = " ".join(command)

    try:
        print(f"Executing command: {command_str}")
        subprocess.run(command_str, shell=True, check=True, capture_output=True)
        print(f"Execution successful for {model} ")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed for {model} ")
        print(e.stderr.decode(), file=sys.stderr)


def main(storm_build_dir, model_dir, timeout):
    check_directory_exists(storm_build_dir)
    check_directory_exists(model_dir)
    check_directory_exists("winningregion")

    storm_pomdp = os.path.join(storm_build_dir, "bin", "storm-pomdp")
    check_file_exists(storm_pomdp)

    timeout_command = f"timeout {timeout}"

    benchmarks = [
        # ("maze-fancy-observations.nm", {}),
        # ("maze1.prism", {}),
        # ("obstacle.nm", {"N": 6}),
        ("rocks2.nm", {"N": 6}),
        # ("avoid.nm", {"N": 6, "RADIUS": 3}),
        # ("evade.nm", {"N": 6, "RADIUS": 2}),
        # ("intercept.nm", {"N": 7, "RADIUS": 1}),
        # ("refuel.nm", {"N": 6, "ENERGY": 8})
        # Uncomment and add other benchmarks here
        # ("model2.prism", {"N": 6}),
        # ("model3.prism", {"N": 7, "RADIUS": 1}),
    ]

    for model, params in benchmarks:
        run_storm_pomdp(timeout_command, storm_pomdp, model_dir, model, params)


if __name__ == "__main__":
    if len(sys.argv) != 4:
        print(f"Usage: {sys.argv[0]} STORMBUILDDIR MODELSDIR TIMEOUT", file=sys.stderr)
        sys.exit(1)

    storm_build_dir = sys.argv[1]
    model_dir = sys.argv[2]
    timeout = sys.argv[3]

    main(storm_build_dir, model_dir, timeout)
