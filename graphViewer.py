import os
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QDialog
from PyQt5.QtCore import Qt
import networkx as nx
from networkx.drawing.nx_pydot import read_dot, write_dot
import matplotlib.pyplot as plt
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg as FigureCanvas

class HoverGraphApp(QMainWindow):
    def __init__(self, dirName):
        super().__init__()
        self.dir = dirName

        # Initialize graph data
        original_graph_path = os.path.join(self.dir, 'mem_fun.dot')
        self.original_graph = self.read_graph(original_graph_path)
        self.transformed_graph = self.create_transformed_graph(self.original_graph)
        write_dot(self.transformed_graph, 'main_graph.dot')

        self.main_graph = self.transformed_graph
        self.graph_dict = self.create_graph_dict()
        self.hovered_node = None
        self.pos = nx.spring_layout(self.main_graph)  # Calculate positions once

        self.initUI()

    def initUI(self):
        self.setWindowTitle('Graph Viewer with Hover Animation')
        self.showFullScreen()  # Make the main window fullscreen

        self.figure, self.ax = plt.subplots()
        self.canvas = FigureCanvas(self.figure)

        self.setCentralWidget(self.canvas)
        self.draw_graph(self.main_graph)

        self.canvas.mpl_connect('motion_notify_event', self.on_hover)
        self.canvas.mpl_connect('button_press_event', self.on_click)

    def read_graph(self, filepath):
        return read_dot(filepath)

    def create_transformed_graph(self, original_graph):
        transformed_graph = nx.DiGraph()
        
        for node in original_graph.nodes():
            if node == 'initial':
                transformed_graph.add_node(node)
            else:
                scheduler_graph_path = os.path.join(self.dir, 'schedulers', f"{node}", 'default.dot')
                memory_transitions_graph_path = os.path.join(self.dir, 'memory-transitions', f"{node}", 'default.dot')
                transformed_graph.add_node(node, file=scheduler_graph_path)
                transformed_graph.add_node(f"{node}'", file=memory_transitions_graph_path)
                transformed_graph.add_edge(node, f"{node}'")
        
        for u, v, data in original_graph.edges(data=True):
            transformed_graph.add_edge(f"{u}'", v, **data)

        return transformed_graph

    def create_graph_dict(self):
        graph_dict = {}
        for node in self.main_graph.nodes(data=True):
            if 'file' in node[1]:
                try:
                    graph_dict[node[0]] = self.read_graph(node[1]['file'])
                except FileNotFoundError:
                    pass
        return graph_dict

    def draw_graph(self, graph):
        self.ax.clear()
        
        main_nodes = [n for n, attr in graph.nodes(data=True) if ('file' in attr and 'schedulers' in attr['file'])]
        nx.draw_networkx_nodes(graph, self.pos, nodelist=main_nodes, ax=self.ax, node_size=700, node_color='lightblue')

        intermediary_nodes = [n for n in graph.nodes() if n not in main_nodes]
        nx.draw_networkx_nodes(graph, self.pos, nodelist=intermediary_nodes, ax=self.ax, node_size=50, node_color='black')

        self.edges = nx.draw_networkx_edges(graph, self.pos, ax=self.ax, arrowstyle='-|>', arrowsize=20, connectionstyle='arc3,rad=0.1')
        self.labels = nx.draw_networkx_labels(graph, self.pos, ax=self.ax, labels={n: n for n in main_nodes})

        self.main_nodes = main_nodes
        self.intermediary_nodes = intermediary_nodes

        self.canvas.draw()

    def on_hover(self, event):
        if event.inaxes is not None:
            x, y = event.xdata, event.ydata
            node_hovered = self.get_node_at(x, y)
            
            if node_hovered != self.hovered_node:
                self.hovered_node = node_hovered
                self.update_hover_effects()

    def get_node_at(self, x, y):
        tolerance = 0.1
        for node, (px, py) in self.pos.items():
            if (px - tolerance < x < px + tolerance) and (py - tolerance < y < py + tolerance):
                return node
        return None

    def update_hover_effects(self):
        self.draw_graph(self.main_graph)

        if self.hovered_node is not None and self.hovered_node in self.main_nodes:
            nx.draw_networkx_nodes(self.main_graph, self.pos, nodelist=[self.hovered_node], ax=self.ax, node_size=700, node_color='yellow')
        elif self.hovered_node is not None and self.hovered_node in self.intermediary_nodes:
            nx.draw_networkx_nodes(self.main_graph, self.pos, nodelist=[self.hovered_node], ax=self.ax, node_size=50, node_color='yellow')
        
        self.canvas.draw()

    def on_click(self, event):
        if event.inaxes is not None:
            x, y = event.xdata, event.ydata
            clicked_node = self.get_node_at(x, y)
            if clicked_node:
                self.open_graph_dialog(self.graph_dict.get(clicked_node, nx.DiGraph()), f"Node {clicked_node}")

    def open_graph_dialog(self, graph, title):
        dialog = QDialog(self)
        dialog.setWindowTitle(title)
        dialog.setWindowState(Qt.WindowFullScreen)  # Make the dialog fullscreen
        
        layout = QVBoxLayout()

        figure, ax = plt.subplots()
        canvas = FigureCanvas(figure)
        layout.addWidget(canvas)
        
        pos = nx.drawing.nx_agraph.graphviz_layout(graph, prog='dot')

        labels = {n: attr['label'][1:-1] if 'label' in attr else n for n, attr in graph.nodes(data=True)}
        edge_labels = {(u, v): data['label'][1:-1] if 'label' in data else '' for u, v, data in graph.edges(data=True)}
    
        solid_edges = [(u, v) for u, v, data in graph.edges(data=True) if data.get('style') != '"dashed"']
        dashed_edges = [(u, v) for u, v, data in graph.edges(data=True) if data.get('style') == '"dashed"']

        nx.draw_networkx_edges(graph, pos, edgelist=solid_edges, ax=ax, arrowstyle='-|>', arrowsize=20, style='solid')
        nx.draw_networkx_edges(graph, pos, edgelist=dashed_edges, ax=ax, arrowstyle='-|>', arrowsize=20, style='dashed')
    
        nx.draw_networkx_labels(graph, pos, labels=labels, ax=ax, font_size=10, bbox=dict(facecolor='white', alpha=0.5, edgecolor='black', boxstyle='round,pad=0.5'))
        nx.draw_networkx_edge_labels(graph, pos, edge_labels=edge_labels, ax=ax)
    
        canvas.draw()

        dialog.setLayout(layout)
        dialog.exec_()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = HoverGraphApp(sys.argv[1])
    ex.show()
    sys.exit(app.exec_())
