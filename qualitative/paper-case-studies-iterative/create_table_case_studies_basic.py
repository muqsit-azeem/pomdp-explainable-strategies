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


def count_nodes_with_gc(dot_file_path):
    try:
        result = subprocess.run(["gc", "-n", dot_file_path], capture_output=True, text=True, check=True)
        output = result.stdout.strip()
        # Extract the number of nodes from the output
        num_nodes = int(output.split()[0])
        return num_nodes
    except subprocess.CalledProcessError as e:
        print(f"Error counting nodes in {dot_file_path}: {e.stderr}", file=sys.stderr)
        return 0


def analyze_dot_files(dir_path):
    dot_files = []
    for root, _, files in os.walk(dir_path):
        for file in files:
            if file.endswith(".dot"):
                dot_files.append(os.path.join(root, file))

    num_files = len(dot_files)
    node_counts = [count_nodes_with_gc(f) for f in dot_files]
    total_nodes = sum(node_counts)
    min_nodes = min(node_counts) if node_counts else 0
    max_nodes = max(node_counts) if node_counts else 0

    return num_files, total_nodes, min_nodes, max_nodes


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
            dt_num, dt_total, dt_min, dt_max = analyze_dot_files(dt_dir)
            mt_num, mt_total, mt_min, mt_max = analyze_dot_files(mem_transitions_dir)
            benchmark_name = filename.replace("-fixpoint.wr", "")
            benchmarks.append((benchmark_name, dt_num, dt_total, dt_min, dt_max, mt_total, mt_min, mt_max))
    return benchmarks


def print_table(benchmarks):
    header = f"{'Benchmark':<25} {'#FSC Nodes':<10} {'Pol. Total Nodes':<20} {'Pol. Min Nodes':<20} {'Pol. Max Nodes':<20} {'Mem. Total Nodes':<20} {'Mem. Min Nodes':<20} {'Mem. Max Nodes':<20}"
    print(header)
    for benchmark, dt_num, scheduler_total_nodes, scheduler_min_nodes, scheduler_max_nodes, memory_total_nodes, memory_min_nodes, memory_max_nodes in benchmarks:
        print("=" * len(header))
        print(
            f"{benchmark:<25} {dt_num:<10} {scheduler_total_nodes:<20} {scheduler_min_nodes:<20} {scheduler_max_nodes:<20} {memory_total_nodes:<20} {memory_min_nodes:<20} {memory_max_nodes:<20}")


def generate_latex_table(benchmarks):
    print("\\begin{table}[ht]")
    print("\\centering")
    print("\\begin{tabular}{|l|r|r|r|}")
    print("\\hline")
    print("Benchmark & \\#FSC-nodes & Pol. Nodes (Min, Max) & Mem. Nodes (Min, Max) \\\\ \\hline")
    for benchmark, dt_num, scheduler_total_nodes, scheduler_min_nodes, scheduler_max_nodes, memory_total_nodes, memory_min_nodes, memory_max_nodes in benchmarks:
        print(
            f"{benchmark} & {dt_num} & {scheduler_total_nodes} ({scheduler_min_nodes}, {scheduler_max_nodes}) & {memory_total_nodes} ({memory_min_nodes}, {memory_max_nodes}) \\\\ \\hline")
    print("\\end{tabular}")
    print("\\caption{results}")
    print("\\label{tab:benchmark-almost-sure}")
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
