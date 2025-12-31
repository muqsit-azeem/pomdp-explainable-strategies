import re
from collections import defaultdict, Counter
import csv
import sys
import os

def parse_dot_tree(dot_string):
    """Parse DOT format decision tree"""
    nodes = {}
    edges = []

    # Extract node definitions
    node_pattern = r'^\s*(\d+)\s*\[label="([^"]+)"\]'
    for line in dot_string.split('\n'):
        match = re.match(node_pattern, line.strip())
        if match:
            node_id = int(match.group(1))
            label = match.group(2)
            nodes[node_id] = label

    # Extract edges
    edge_pattern = r'(\d+)\s*->\s*(\d+)\s*\[(.*?)\]'
    for match in re.finditer(edge_pattern, dot_string):
        from_node = int(match.group(1))
        to_node = int(match.group(2))
        edge_attrs = match.group(3)

        label_match = re.search(r'label="([^"]+)"', edge_attrs)
        condition = label_match.group(1) if label_match else ""

        edges.append({
            'from': from_node,
            'to': to_node,
            'condition': condition
        })

    return nodes, edges

def is_leaf(node_label):
    """Check if a node is a leaf (action node)"""
    return not any(op in node_label for op in ['<=', '>=', '<', '>', '==', '!='])

def extract_paths(nodes, edges):
    """Extract all paths from root to leaves"""
    children = defaultdict(list)
    for edge in edges:
        children[edge['from']].append({
            'node_id': edge['to'],
            'condition': edge['condition']
        })

    paths = []

    def dfs(node_id, current_conditions, path_nodes):
        node_label = nodes[node_id]

        if is_leaf(node_label):
            paths.append({
                'conditions': current_conditions.copy(),
                'action': node_label.strip(),
                'num_predicates': len(current_conditions),
                'leaf_node_id': node_id,
                'path_nodes': path_nodes.copy()
            })
            return

        for child in children[node_id]:
            child_node_id = child['node_id']
            edge_condition = child['condition']

            if edge_condition == "True":
                cond_str = node_label
            else:
                cond_str = f"NOT ({node_label})"

            current_conditions.append(cond_str)
            path_nodes.append(child_node_id)
            dfs(child_node_id, current_conditions, path_nodes)
            path_nodes.pop()
            current_conditions.pop()

    if len(nodes) > 0:
        dfs(0, [], [0])
    return paths

def read_feature_names(obs_file):
    """Read feature names from ordered_observation.txt"""
    features = []
    try:
        with open(obs_file, 'r') as f:
            for line in f:
                feature = line.strip()
                if feature:
                    features.append(feature)
    except FileNotFoundError:
        raise FileNotFoundError(f"Feature file {obs_file} not found")
    return features

def build_decision_tree_query_function(nodes, edges, feature_names):
    """Build a function that queries the tree given an observation"""
    children = defaultdict(list)
    for edge in edges:
        children[edge['from']].append({
            'node_id': edge['to'],
            'condition': edge['condition']
        })

    def query_tree(observation_values):
        """
        Query the tree with observation values (list).
        Returns: (action, depth, leaf_node_id)
        observation_values: list of floats in order matching feature_names
        """
        node_id = 0
        depth = 0

        while True:
            node_label = nodes[node_id]

            # If leaf, return action, depth, and leaf node id
            if is_leaf(node_label):
                return (node_label.strip(), depth, node_id)

            # Parse condition and evaluate
            match = re.match(r"([a-zA-Z_][\w\']*)\s*(<=|>=|<|>|==|!=)\s*([-\d.]+)", node_label)
            if not match:
                return (node_label.strip(), depth, node_id)  # Fallback

            feature_name = match.group(1)
            operator = match.group(2)
            threshold = float(match.group(3))

            # Find feature index
            feature_idx = None
            if feature_names:
                try:
                    feature_idx = feature_names.index(feature_name)+1 # +1 because first index is the node id
                except ValueError:
                    pass

            if feature_idx is None:
                # Try to parse as observation_X
                obs_match = re.match(r"observation_(\d+)", feature_name)
                if obs_match:
                    feature_idx = int(obs_match.group(1))
                else:
                    # Feature not found, take first child
                    if children[node_id]:
                        next_node_id = children[node_id][0]['node_id']
                    else:
                        return (node_label.strip(), depth, node_id)
                    node_id = next_node_id
                    depth += 1
                    continue

            if feature_idx >= len(observation_values):
                # Index out of range
                if children[node_id]:
                    next_node_id = children[node_id][0]['node_id']
                else:
                    return (node_label.strip(), depth, node_id)
                node_id = next_node_id
                depth += 1
                continue

            feature_value = float(observation_values[feature_idx])

            # Evaluate condition
            if operator == "<=":
                condition_true = feature_value <= threshold
            elif operator == ">=":
                condition_true = feature_value >= threshold
            elif operator == "<":
                condition_true = feature_value < threshold
            elif operator == ">":
                condition_true = feature_value > threshold
            elif operator == "==":
                condition_true = feature_value == threshold
            elif operator == "!=":
                condition_true = feature_value != threshold
            else:
                condition_true = True

            # Find next node based on condition
            next_node_id = None
            for child in children[node_id]:
                if (condition_true and child['condition'] == "True") or \
                   (not condition_true and child['condition'] != "True"):
                    next_node_id = child['node_id']
                    break

            if next_node_id is None and children[node_id]:
                next_node_id = children[node_id][0]['node_id']

            if next_node_id is None:
                return (node_label.strip(), depth, node_id)

            node_id = next_node_id
            depth += 1

    return query_tree

def read_csv_traces(csv_file):
    """Read CSV file with observation traces"""
    traces = []
    with open(csv_file, 'r') as f:
        reader = csv.reader(f)
        for row in reader:
            if row and not row[0].startswith('#') and not row[0].startswith('BEGIN'):
                # Last column is action, rest are observations
                observation_values = [float(x) for x in row[:-1]]
                action_id = int(row[-1])
                traces.append({
                    'observation': observation_values,
                    'action_id': action_id
                })
    return traces

def compute_trace_weighted_depth(query_func, traces):
    """Compute average depth weighted by trace frequency"""
    if not traces:
        return 0

    total_depth = 0
    for trace in traces:
        action, depth, leaf_id = query_func(trace['observation'])
        total_depth += depth

    return total_depth / len(traces)

def compute_top_k_rule_mass(paths, traces, query_func):
    """
    Compute top-k rule mass by ranking paths by trace coverage.
    For each k, report coverage by the k most-frequently-used paths.
    """
    if not paths or not traces:
        return {}

    # Count how many traces reach each leaf node
    leaf_trace_count = defaultdict(int)
    for trace in traces:
        action, depth, leaf_id = query_func(trace['observation'])
        leaf_trace_count[leaf_id] += 1

    # Associate each path with its trace count
    path_coverage = []
    for path in paths:
        leaf_id = path['leaf_node_id']
        trace_count = leaf_trace_count.get(leaf_id, 0)
        path_coverage.append({
            'path': path,
            'trace_count': trace_count,
            'num_predicates': path['num_predicates']
        })

    # Sort paths by trace count (descending)
    sorted_paths = sorted(path_coverage, key=lambda p: p['trace_count'], reverse=True)

    # Compute top-k coverage
    results = {}
    total_traces = len(traces)
    
    for k in range(1, len(sorted_paths) + 1):
        # Sum traces covered by top k paths
        covered = sum(p['trace_count'] for p in sorted_paths[:k])
        coverage_pct = (covered / total_traces) * 100
        
        # Get max depth among top k paths
        max_depth = max(p['num_predicates'] for p in sorted_paths[:k])
        
        results[k] = {
            'covered_traces': covered,
            'coverage_pct': coverage_pct,
            'max_depth': max_depth
        }

    return results

def analyze_node(node_id, root_dir, feature_names):
    
    """Analyze a single node"""
    dot_file = os.path.join(root_dir, str(node_id), 'default.dot')
    csv_file = os.path.join(root_dir, f'{node_id}.csv')

    if not os.path.exists(dot_file):
        raise FileNotFoundError(f"Missing decision tree file: {dot_file}")
    
    if not os.path.exists(csv_file):
        raise FileNotFoundError(f"Missing CSV file: {csv_file}")

    # Parse DT
    with open(dot_file, 'r') as f:
        dot_string = f.read()

    nodes, edges = parse_dot_tree(dot_string)
    paths = extract_paths(nodes, edges)
    query_func = build_decision_tree_query_function(nodes, edges, feature_names)

    # Read traces
    traces = read_csv_traces(csv_file)

    # Compute metrics
    twd = compute_trace_weighted_depth(query_func, traces)
    top_k = compute_top_k_rule_mass(paths, traces, query_func)

    # Get trace depths for all traces
    trace_depths = [query_func(trace['observation'])[1] for trace in traces]

    return {
        'num_traces': len(traces),
        'num_paths': len(paths),
        'num_nodes': len(nodes),
        'trace_weighted_depth': twd,
        'top_k_coverage': top_k,
        'avg_rule_complexity': sum(p['num_predicates'] for p in paths) / len(paths) if paths else 0,
        'trace_depths': trace_depths
    }

def main():
    if len(sys.argv) < 4:
        print("Usage: python analysis.py <root_directory> <transitions | schedulers> <node_ids>")
        print("\nExamples:")
        print("  python analysis.py explainable-mealy-machines/refuelN6-ENERGY6 schedulers 1 2 3 4 8")
        print("\nExpected structure:")
        print("  root/")
        print("    |-- ordered_observations.txt")
        print("    |-- memory-transitions/ or schedulers/")
        print("        ├-- 1.csv")
        print("        ├-- 2.csv")
        print("        ├-- 1/default.dot")
        print("        ├-- 2/default.dot")
        print("        └-- ...")
        sys.exit(1)

    if sys.argv[2] not in ['transitions', 'schedulers']:
        print("Error: Second argument must be either 'transitions' or 'schedulers'")
        sys.exit(1)

    root_dir = sys.argv[1] + '/' + ('memory-transitions' if sys.argv[2] == 'transitions' else 'schedulers') + '/'
    node_ids = sys.argv[3:]

    # Read feature names
    obs_file = os.path.join(root_dir, '../ordered_observations.txt')
    # print(f"Reading feature names from {obs_file}...")
    feature_names = read_feature_names(obs_file)
    
    # print("\n" + "="*70)
    # print("TRACE-WEIGHTED INTERPRETABILITY ANALYSIS")
    # print("="*70)

    all_results = {}

    for node_id in node_ids:
        # print(f"\nAnalyzing node {node_id}...")
        result = analyze_node(node_id, root_dir, feature_names)
        if result:
            all_results[node_id] = result
            # print(f"  ✓ Processed {result['num_traces']} traces")

    # Print results
    # print("\n" + "="*70)
    # print("RESULTS PER BENCHMARK")
    # print("="*70)

    for node_id in sorted(all_results.keys(), key=lambda x: int(x)):
        result = all_results[node_id]
        print("="*20)
        print(f"      Node {node_id}")
        print("="*20)
        print(f"  Traces: {result['num_traces']}") # traces = number of unique traces (number of rows in the csv file) in the benchmark
        print(f"  Paths: {result['num_paths']}") # paths = number of decision paths in the DT
        print(f"  Nodes: {result['num_nodes']}") # nodes = number of nodes in the DT
        print(f"  Avg rule complexity: {result['avg_rule_complexity']:.2f} predicates") # avg rule complexity = average number of predicates per decision path in the DT
        print(f"  Trace-weighted depth: {result['trace_weighted_depth']:.2f}") # trace-weighted depth = average depth of the DT weighted by the number of traces reaching each leaf

        print(f"\n  Top-k rule coverage (by most-covered paths):")
        top_k = result['top_k_coverage']
        print("\n    k | Coverage (%) | Max Depth")
        print("    " + "-"*30)
        for k in sorted(top_k.keys()):
            info = top_k[k]
            print(f"   {k:2d} |    {info['coverage_pct']:6.2f}   |   {info['max_depth']:3d}")
        print("    " + "-"*30 + "\n")

        # for k in sorted(top_k.keys()):
        #     info = top_k[k]
        #     print(f"    k={k}: {info['coverage_pct']:.1f}% of traces (max depth={info['max_depth']})")
        # if len(top_k) > 5:
        #     print(f"    ... ({len(top_k) - 5} more)")

    # Overall summary
    # if all_results:
    #     print("\n" + "="*70)
    #     print("OVERALL SUMMARY")
    #     print("="*70)
    #     avg_twd = sum(r['trace_weighted_depth'] for r in all_results.values()) / len(all_results)
    #     avg_paths = sum(r['num_paths'] for r in all_results.values()) / len(all_results)
    #     avg_complexity = sum(r['avg_rule_complexity'] for r in all_results.values()) / len(all_results)
        
    #     print(f"Benchmarks analyzed: {len(all_results)}")
    #     print(f"Avg trace-weighted depth: {avg_twd:.2f}")
    #     print(f"Avg paths per benchmark: {avg_paths:.1f}")
    #     print(f"Avg rule complexity: {avg_complexity:.2f} predicates")

    #     # Aggregate all traces from all benchmarks
    #     print(f"\nCombined Top-k Rule Coverage (all benchmarks):")
    #     all_trace_depths = []
    #     for result in all_results.values():
    #         all_trace_depths.extend(result['trace_depths'])
        
    #     total_traces = len(all_trace_depths)
    #     print(f"  Total traces across all benchmarks: {total_traces}")
        
    #     # Find max depth across all traces
    #     max_depth = max(all_trace_depths) if all_trace_depths else 0
        
    #     # For each k, count traces with depth < k
    #     for k in range(max_depth + 2):
    #         covered = sum(1 for d in all_trace_depths if d < k)
    #         coverage_pct = (covered / total_traces) * 100
    #         print(f"  k={k}: {coverage_pct:.1f}% of all traces (depth < {k})")
            
    #         # Find k where coverage reaches 80%
    #         if coverage_pct >= 80 and k > 0:
    #             print(f"\n  ✓ {coverage_pct:.1f}% of all traces covered with k={k}")
    #             break

if __name__ == "__main__":
    main()
