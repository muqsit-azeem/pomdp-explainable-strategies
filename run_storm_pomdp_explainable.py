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


def create_directory_if_not_exists(directory):
    if not os.path.exists(directory):
        print(f"{directory} not found. Creating directory.", file=sys.stderr)
        os.makedirs(directory)
    elif not os.path.isdir(directory):
        print(f"{directory} exists but is not a directory", file=sys.stderr)
        sys.exit(1)


def check_file_exists(file_path):
    if not os.path.exists(file_path):
        print(f"{file_path} not found", file=sys.stderr)
        sys.exit(1)


def run_storm_pomdp(timeout_command, storm_pomdp, model, params_dict_string):
    params_dict = eval(params_dict_string)
    print("In RUN STROM POMDP", params_dict)
    const_str = ""
    if params_dict:
        const_str = "-const " + ",".join(f"{key}={value}" for key, value in params_dict.items())

    command = [
        timeout_command, storm_pomdp,
        "--prism", f"{model}",
        '--prop', '"Pmax=? [\\"notbad\\" U \\"goal\\"]"',
        const_str,
        "--buildstateval",
        "--buildobsval",
        "--build-all-labels",
        "--qualitative-analysis",
        "--memlesssearch", "iterative",
        "--pomdpQualitative:nographprocessing ",
        "--onlydeterministic",
        "-stats",
        "--trace",
        "--winningregion",
        "--exportwinningregion",
        f"winningregion/{os.path.basename(model).split('.')[0]}-fixpoint.wr"
    ]

    command_str = " ".join(command)

    try:
        print(f"Executing command: {command_str}")
        subprocess.run(command_str, shell=True, check=True, capture_output=True)
        print(f"Execution successful for {model} ")
    except subprocess.CalledProcessError as e:
        print(f"Execution failed for {model} ")
        print(e.stderr.decode(), file=sys.stderr)


def main(timeout, storm_pomdp_ex, model, params_dict):
    print(f"storm_pomdp_ex: {storm_pomdp_ex}")
    print(f"model: {model}")
    print(f"timeout: {timeout}")
    print(f"params dict: {params_dict}")
    check_file_exists(storm_pomdp_ex)
    check_file_exists(model)
    create_directory_if_not_exists("winningregion")

    timeout_command = f"timeout {timeout}"
    run_storm_pomdp(timeout_command, storm_pomdp_ex, model, params_dict)


if __name__ == "__main__":
    print(len(sys.argv))
    if len(sys.argv) < 5 or len(sys.argv) > 6:
        print(f"Usage: {sys.argv[0]} TIMEOUT STORMPOMDPEX INPUTMODEL PARAMS_DICT", file=sys.stderr)
        sys.exit(1)

    timeout = sys.argv[1]
    storm_pomdp_exe = sys.argv[2]
    model = sys.argv[3]
    params_dict = sys.argv[4] if len(sys.argv) == 5 else {}
    print(f"ADDDDADADADAADADADADADADAD{params_dict}")

    main(timeout, storm_pomdp_exe, model, params_dict)
