import glob
from dtcontrol.benchmark_suite import BenchmarkSuite
from dtcontrol.decision_tree.decision_tree import DecisionTree
from dtcontrol.decision_tree.splitting.axis_aligned import AxisAlignedSplittingStrategy
from dtcontrol.decision_tree.impurity.entropy import Entropy

from process_storm_output import *

TIMEOUT = 60*60*2 # 2 hours



class DTEngine:
	def __init__(self, outputDir):
		self.outputDir = outputDir

		self.dtOutputDir = os.path.join(outputDir, 'dts')
		if not os.path.exists(self.dtOutputDir):
			os.makedirs(self.dtOutputDir)

		self.suit = BenchmarkSuite(timeout=TIMEOUT, output_folder=self.dtOutputDir, output_type='dot', save_folder=None, benchmark_file=None, rerun=True)
		self.suit.add_datasets([os.path.join(outputDir, 'schedulers'),os.path.join(outputDir, 'transitions')])
	
		self.classifiers = [DecisionTree([AxisAlignedSplittingStrategy()], Entropy(), "CART")]

		self.actions = open(os.path.join(outputDir, 'action_mapping.txt'),"r").readlines()
		self.stateVars = open(os.path.join(outputDir, 'ordered_observations.txt'),"r").readlines()


	def runBenchmark(self):
		self.suit.benchmark(self.classifiers)

	
	def getDotFiles(self):
		self.dots = glob.glob(os.path.join(self.dtOutputDir, '**/*.dot'), recursive=True)
		print(os.path.join(self.dtOutputDir, '**/*.dot'))


	def postProcessDots(self):
		for dot in self.dots:
			print(f"Processing {dot}")
			f = open(dot, "r")
			s = f.read()
			f.close()

			fUpdated = open(dot[:-4]+"_updated.dot", "w")

			if "_scheduler" in dot: # replace the leaf-labels with action names in the strategy dot files
				for i in range(len(self.actions)):
					a = self.actions[i].strip()
					if len(a) == 0:
						a = "no label"
					elif ";" in a:
						a = a.replace(";", "\n").replace("->", ":")
					s = s.replace(f"[label=\"{i}\"];", f"[label=\"{a}\"];")

			for i in range(len(self.stateVars)): # replace the state variable names in the dot files
				s = s.replace(f"label=\"x_{i} ", f"label=\"{self.stateVars[i].strip()}")

			fUpdated.write(s)
			fUpdated.close()
					


def main():
	outputDir = sys.argv[1]
	engine = DTEngine(outputDir)
	engine.runBenchmark()
	engine.getDotFiles()
	engine.postProcessDots()




if __name__ == "__main__":
	main()
