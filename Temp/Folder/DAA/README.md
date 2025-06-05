
# DAA syllabus
```
Unite - 1 

Introduction: Concept of algorithmic efficiency, run time analysis of algorithms, Asymptotic Notations. Growth of Functions, Master's Theorem,

Unite - 2

Searching and Sorting: Structure of divide-and-conquer algorithms; examples: binary
search, quick sort, Strassen Matrix Multiplication; merge sort, heap sort and Analysis of divide and conquer run time, recurrence relations.


Unite - 3

Greedy Method: Overview of the greedy paradigm examples of exact optimization solution: minimum cost spanning tree, approximate solutions: Knapsack problem, Kruskal's algorithm and Prim's algorithm for finding Minimum cost Spanning Trees, Dijkstra's and Bellman Ford Algorithm for finding Single source shortest paths, Huffman coding, Activity Selection Problem.

Unite - 4
Dynamic programming: Principles of dynamic programming. Applications: Rod cutting problem, Floyd-Warshall algorithm for all pair shortest paths. Matrix multiplication, travelling salesman Problem, Longest Common sequence, Back tracking: Overview, 8-queen problem, and Knapsack problem, Traveling Salesman problem.


Unite - 5
Branch and bound: LC searching Bounding, FIFO branch and bound, LC branch and bound application: 0/1 Knapsack problem


Unite - 6
Computational Complexity: Polynomial Vs non-polynomial time complexity; NP-hard and NP-complete classes, examples: Circuit Satisfiablity, Vertex cover, Subset Sum problem, Randomized Algorithms, String Matching, NP-Hard and NP Completeness, Introduction to Approximation Algorithms



```





 

# List of Experiments

```
1. Sort a given set of elements using the Quicksort method and determine the time required to sort the elements. Repeat the experiment for different values of n, the number of elements in the list to be sorted and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.


2.  Implement a parallelized Merge Sort algorithm to sort a given set of elements and determine the time required to sort the elements. Repeat the experiment for different values of n, the number of elements in the list to be sorted and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.

3.  Obtain the Topological ordering of vertices in a given digraph. b. Compute the transitive closure of a given directed graph using Warshall's algorithm.

4.  Implement 0/1 Knapsack problem using Dynamic Programming.

5.  From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra's algorithm.


6. Find Minimum Cost Spanning Tree of a given undirected graph using Kruskal's algorithm.

7. Print all the nodes reachable from a given starting node in a digraph using BFS method. b. Check whether a given graph is connected or not using DFS method. 

8 Find Minimum Cost Spanning Tree of a given undirected graph using Prim's algorithm.

```

---
---




### 🔹 **Unit 1: Introduction**

**Q1:** What is algorithmic efficiency?
**A:** It refers to how effectively an algorithm uses resources like time and memory. It's evaluated by time and space complexity.

**Q2:** Define Asymptotic Notations.
**A:** Asymptotic notations describe the running time of an algorithm in terms of input size:

* **Big O (O)**: Worst case
* **Omega (Ω)**: Best case
* **Theta (Θ)**: Average case

**Q3:** What is Master’s Theorem used for?
**A:** It provides a way to analyze the time complexity of divide-and-conquer algorithms.

---

### 🔹 **Unit 2: Searching and Sorting**

**Q4:** What is the time complexity of Binary Search?
**A:** O(log n)

**Q5:** Differentiate between Merge Sort and Quick Sort.
**A:**

* **Merge Sort**: Stable, O(n log n) in all cases
* **Quick Sort**: Faster in practice, O(n²) worst case but O(n log n) average case

**Q6:** What is the significance of Strassen’s Matrix Multiplication?
**A:** It multiplies matrices faster than the traditional O(n³) approach, with time complexity O(n^2.81).

---

### 🔹 **Unit 3: Greedy Method**

**Q7:** Define Greedy Algorithm.
**A:** An algorithm that makes the best choice at each step hoping to find the global optimum.

**Q8:** Give an example of Greedy Algorithm.
**A:** Kruskal’s Algorithm for Minimum Spanning Tree.

**Q9:** What is the difference between Dijkstra’s and Bellman-Ford?
**A:**

* **Dijkstra**: Efficient but doesn't work with negative weights.
* **Bellman-Ford**: Slower but handles negative weights.

---

### 🔹 **Unit 4: Dynamic Programming & Backtracking**

**Q10:** What is the principle of Optimality?
**A:** In dynamic programming, an optimal solution to a problem contains optimal solutions to sub-problems.

**Q11:** List problems solved by Dynamic Programming.
**A:**

* Knapsack
* Matrix Chain Multiplication
* Longest Common Subsequence
* Floyd-Warshall

**Q12:** What is backtracking? Give an example.
**A:** Backtracking is trying all possibilities recursively. Example: 8-Queens Problem.

---

### 🔹 **Unit 5: Branch and Bound**

**Q13:** How is Branch and Bound different from Backtracking?
**A:** B\&B uses bounds to prune branches; Backtracking uses constraints.

**Q14:** What is LC Branch and Bound?
**A:** LC (Least Cost) branch and bound chooses the node with the least cost estimate.

---

### 🔹 **Unit 6: Computational Complexity**

**Q15:** What are NP-complete problems?
**A:** Problems for which no polynomial-time solution is known, but a given solution can be verified in polynomial time.

**Q16:** Define the difference between NP-Hard and NP-Complete.
**A:**

* **NP-Complete** ⊆ **NP-Hard**
* NP-Complete problems are both in NP and NP-Hard; NP-Hard may not be verifiable in polynomial time.

**Q17:** What is the Subset Sum Problem?
**A:** Determine if a subset exists whose sum equals a given number — known to be NP-Complete.

---

## 🧪 **LAB-BASED PRACTICAL VIVA QUESTIONS**

### 🔹 **Experiment 1: Quick Sort**

**Q1:** What is the average and worst-case time complexity of Quick Sort?
**A:** Average: O(n log n), Worst: O(n²)

**Q2:** How is pivot chosen in Quick Sort?
**A:** Common strategies: First element, last element, middle element, or median-of-three.

---

### 🔹 **Experiment 2: Parallel Merge Sort**

**Q3:** Why is parallelization used in Merge Sort?
**A:** It divides the sorting task across processors to improve performance.

**Q4:** Time complexity of Merge Sort?
**A:** O(n log n) in all cases.

---

### 🔹 **Experiment 3: Topological Sort & Warshall’s Algorithm**

**Q5:** What is Topological Sorting?
**A:** Ordering of vertices in a DAG such that for every directed edge u → v, u appears before v.

**Q6:** What does Warshall’s Algorithm compute?
**A:** Transitive closure of a directed graph.

---

### 🔹 **Experiment 4: 0/1 Knapsack (DP)**

**Q7:** Time complexity of 0/1 Knapsack using DP?
**A:** O(nW), where n = number of items, W = capacity of knapsack.

---

### 🔹 **Experiment 5: Dijkstra’s Algorithm**

**Q8:** What data structure is used in Dijkstra’s Algorithm?
**A:** Priority Queue (often implemented using Min Heap)

---

### 🔹 **Experiment 6 & 8: MST (Kruskal’s & Prim’s)**

**Q9:** How are edges selected in Kruskal’s Algorithm?
**A:** In increasing order of weight using Disjoint Set Union (DSU).

**Q10:** How does Prim’s Algorithm work?
**A:** Grows MST by adding the smallest edge connecting visited and unvisited nodes.

---

### 🔹 **Experiment 7: BFS & DFS**

**Q11:** BFS uses which data structure?
**A:** Queue

**Q12:** DFS uses which data structure?
**A:** Stack or Recursion

---
 







