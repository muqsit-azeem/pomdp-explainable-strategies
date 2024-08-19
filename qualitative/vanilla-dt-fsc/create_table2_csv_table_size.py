import os
import sys


def check_directory_exists(directory):
    if not os.path.exists(directory):
        print(f"Directory {directory} not found", file=sys.stderr)
        sys.exit(1)
    if not os.path.isdir(directory):
        print(f"Directory {directory} not a directory", file=sys.stderr)
        sys.exit(1)


def count_lines_in_csv(file_path):
    try:
        with open(file_path, 'r') as f:
            return sum(1 for _ in f)
    except Exception as e:
        print(f"Error counting lines in {file_path}: {e}", file=sys.stderr)
        return 0


def analyze_csv_files(dir_path):
    csv_files = []
    for root, _, files in os.walk(dir_path):
        for file in files:
            if file.endswith(".csv"):
                csv_files.append(os.path.join(root, file))

    num_files = len(csv_files)
    line_counts = [count_lines_in_csv(f) for f in csv_files]
    total_lines = sum(line_counts)
    min_lines = min(line_counts) if line_counts else 0
    max_lines = max(line_counts) if line_counts else 0

    return num_files, total_lines, min_lines, max_lines


def generate_table(base_dir):
    winningregion_dir = os.path.join(base_dir, "explainable-mealy-machines")
    if not os.path.exists(winningregion_dir):
        print(f"Winning region directory does not exist: {winningregion_dir}", file=sys.stderr)
        sys.exit(1)

    benchmarks = []
    for filename in os.listdir(winningregion_dir):
        if filename.endswith("-fixpoint.wr"):
            wr_file_path = os.path.join(winningregion_dir, filename)
            benchmark_folder = wr_file_path[:wr_file_path.rfind("-")]
            check_directory_exists(benchmark_folder)
            dt_dir = os.path.join(benchmark_folder, "schedulers")
            mem_transitions_dir = os.path.join(benchmark_folder, "memory-transitions")
            check_directory_exists(dt_dir)
            check_directory_exists(mem_transitions_dir)
            dt_num, dt_total, dt_min, dt_max = analyze_csv_files(dt_dir)
            mt_num, mt_total, mt_min, mt_max = analyze_csv_files(mem_transitions_dir)
            benchmark_name = filename.replace("-fixpoint.wr", "")
            benchmarks.append((benchmark_name, dt_num, dt_total, dt_min, dt_max, mt_total, mt_min, mt_max))
    return benchmarks


def print_table(benchmarks):
    header = f"{'Benchmark':<25} {'#CSV Files':<10} {'Pol. Total Rows':<20} {'Pol. Min Rows':<20} {'Pol. Max Rows':<20} {'Mem. Total Rows':<20} {'Mem. Min Rows':<20} {'Mem. Max Rows':<20}"
    print(header)
    for benchmark, dt_num, scheduler_total_lines, scheduler_min_lines, scheduler_max_lines, memory_total_lines, memory_min_lines, memory_max_lines in benchmarks:
        print("=" * len(header))
        print(f"{benchmark:<25} {dt_num:<10} {scheduler_total_lines:<20} {scheduler_min_lines:<20} {scheduler_max_lines:<20} {memory_total_lines:<20} {memory_min_lines:<20} {memory_max_lines:<20}")


def generate_latex_table(benchmarks):
    print("\\begin{table}[ht]")
    print("\\centering")
    print("\\begin{tabular}{|l|r|r|r|}")
    print("\\hline")
    print("Benchmark & \\#CSV Files & Pol. Total Rows (Min, Max) & Mem. Lines (Min, Max) \\\\ \\hline")
    for benchmark, dt_num, scheduler_total_lines, scheduler_min_lines, scheduler_max_lines, memory_total_lines, memory_min_lines, memory_max_lines in benchmarks:
        print(f"{benchmark} & {dt_num} & {scheduler_total_lines} ({scheduler_min_lines}, {scheduler_max_lines}) & {memory_total_lines} ({memory_min_lines}, {memory_max_lines}) \\\\ \\hline")
    print("\\end{tabular}")
    print("\\caption{CAV 21 results}")
    print("\\label{tab:cav-benchmark}")
    print("\\end{table}")


if __name__ == "__main__":
    if len(sys.argv) < 2 or len(sys.argv) > 3:
        print(f"Usage: {sys.argv[0]} BASEDIR [latex]", file=sys.stderr)
        sys.exit(1)

    base_dir = sys.argv[1]
    benchmarks = generate_table(base_dir)
    print_table(benchmarks)

    if len(sys.argv) == 3 and sys.argv[2] == "latex":
        generate_latex_table(benchmarks)
