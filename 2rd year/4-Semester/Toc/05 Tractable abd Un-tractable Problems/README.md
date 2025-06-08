# Tractable and Untractable Problems

This repository provides a comprehensive overview of tractable and untractable problems in computational complexity theory. It covers the classes P, NP, NP-complete, and NP-hard problems, as well as the concept of undecidability. Additionally, it includes detailed examples of these problems such as the vertex cover problem, Hamiltonian path problem, and traveling salesman problem.

## Table of Contents
- [Introduction](#introduction)
- [Tractable Problems (P)](#tractable-problems-p)
- [Non-deterministic Polynomial Time (NP)](#non-deterministic-polynomial-time-np)
- [NP-complete Problems](#np-complete-problems)
- [NP-hard Problems](#np-hard-problems)
- [Undecidability](#undecidability)
- [Examples](#examples)
  - [Vertex Cover Problem](#vertex-cover-problem)
  - [Hamiltonian Path Problem](#hamiltonian-path-problem)
  - [Traveling Salesman Problem](#traveling-salesman-problem)
- [Contributing](#contributing)
- [Example Problem](Example-Problem)
  - [Hamiltonian Path Problem](#hamiltonian-path-problem)
  - [Vertex Cover Problem](#vertex-cover-problem)
  - [read more about problem](#problem)



# Introduction

In computational complexity theory, problems are classified based on the resources required to solve them, particularly time and space. These classifications help us understand the difficulty and feasibility of solving various computational problems. The primary focus is on time complexity, which measures how the time to solve a problem grows with the size of the input.


- read [P, NP, CoNP, NP hard and NP](https://www.geeksforgeeks.org/types-of-complexity-classes-p-np-conp-np-hard-and-np-complete/)

# Tractable Problems (P)

**P** is the class of problems that can be solved by a deterministic Turing machine in polynomial time. These problems are considered tractable or "easy" because their solutions can be found efficiently. Polynomial time means that the time required to solve the problem increases polynomially with the input size, typically expressed as \(O(n^k)\) for some constant \(k\), where \(n\) is the size of the input.

### Detailed Explanation

A problem is in P if there exists an algorithm that can solve any instance of the problem within a time bound by a polynomial function of the size of the input. This implies that the algorithm's running time increases at a manageable rate as the input size grows.

### Examples of P Problems
- **Sorting Algorithms**: Algorithms like Merge Sort and Quick Sort can sort a list of numbers in \(O(n \log n)\) time.
- **Greatest Common Divisor (GCD)**: The Euclidean algorithm finds the GCD of two integers in \(O(\log \min(a, b))\) time.
- **Matrix Multiplication**: The standard algorithm for multiplying two \(n \times n\) matrices runs in \(O(n^3)\) time, though more efficient algorithms exist.

# Non-deterministic Polynomial Time (NP)

**NP** is the class of problems for which a given solution can be verified by a deterministic Turing machine in polynomial time. A problem is in NP if, given a "certificate" (or solution), we can verify its correctness in polynomial time.

### Detailed Explanation

A problem is in NP if there exists a non-deterministic Turing machine that can solve the problem in polynomial time. This means that if we could guess the correct solution, we could verify it quickly. Non-determinism allows the machine to explore many possible solutions simultaneously, effectively "guessing" the correct one.

# P vs. NP
- **P**: Problems that can be solved in polynomial time.
- **NP**: Problems for which solutions can be verified in polynomial time.
- **P = NP?**: It is an open question whether every problem whose solution can be verified in polynomial time can also be solved in polynomial time. If P = NP, it would mean that all problems in NP can be solved as efficiently as they can be verified.

# NP-complete Problems

**NP-complete** problems are a subset of NP problems that are both in NP and as hard as any problem in NP. A problem is NP-complete if:
1. It is in NP.
2. Every problem in NP can be reduced to it in polynomial time.

### Detailed Explanation

To show that a problem is NP-complete, we use a process called polynomial-time reduction. If we can take any problem in NP and transform it into our problem in polynomial time, then solving our problem efficiently would allow us to solve all NP problems efficiently.

# Importance of NP-complete Problems
NP-complete problems are significant because they represent the "hardest" problems in NP. If any NP-complete problem can be solved in polynomial time, then every problem in NP can be solved in polynomial time, implying P = NP.

### Examples of NP-complete Problems
- **Boolean Satisfiability Problem (SAT)**: Given a Boolean formula, determine if there is an assignment of truth values to variables that makes the formula true.
- **Knapsack Problem**: Given a set of items with weights and values, determine the most valuable subset of items that can be carried in a knapsack of limited capacity.
- **Traveling Salesman Problem (Decision Version)**: Given a list of cities and distances, determine if there is a tour visiting each city exactly once with a total distance less than a given value.

## NP-hard Problems

**NP-hard** problems are at least as hard as the hardest problems in NP. They do not have to be in NP (i.e., they do not have to have solutions that can be verified in polynomial time). Solving an NP-hard problem in polynomial time would mean that every problem in NP can be solved in polynomial time.

### Detailed Explanation

A problem is NP-hard if every problem in NP can be reduced to it in polynomial time. However, NP-hard problems are not required to be in NP themselves. They may be more complex or even undecidable.

### Examples of NP-hard Problems
- **Halting Problem**: Determine if a given program will halt or run forever on a given input. This problem is undecidable and therefore not in NP.
- **General Version of the Traveling Salesman Problem**: Find the shortest possible route that visits each city exactly once and returns to the origin city. This problem is NP-hard but not necessarily in NP unless we restrict it to a decision version.
- **3D Bin Packing Problem**: Determine the minimum number of bins required to pack a set of 3D objects. This problem is NP-hard.

## Undecidability

Undecidable problems are problems for which no algorithm can determine the answer in a finite amount of time. These problems are beyond the scope of NP and NP-hard problems and represent a different level of computational difficulty.

### Detailed Explanation

A problem is undecidable if there is no algorithm that can solve all instances of the problem in a finite amount of time. This means that for some inputs, the algorithm may run indefinitely without providing an answer.

### Examples of Undecidable Problems
- **Halting Problem**: Given a program and an input, determine whether the program will halt or run forever on that input. Alan Turing proved that there is no general algorithm to solve this problem.
- **Post Correspondence Problem**: Given two lists of strings, determine if there is a sequence of indices that, when applied to both lists, results in the same string. This problem is undecidable.

## Examples

# Vertex Cover Problem

The **vertex cover problem** asks whether there is a subset of vertices in a graph such that each edge is incident to at least one vertex in the subset. This problem is NP-complete.

- [Vertex Cover Problem](https://www.geeksforgeeks.org/introduction-and-approximate-solution-for-vertex-cover-problem/)




#### Detailed Explanation
Given a graph \( G = (V, E) \) and an integer \( k \), the vertex cover problem asks whether there exists a subset \( V' \subseteq V \) such that every edge in \( E \) has at least one endpoint in \( V' \) and the size of \( V' \) is at most \( k \).

**Example**: For a graph with vertices \( V = \{1, 2, 3, 4\} \) and edges \( E = \{(1,2), (1,3), (2,3), (3,4)\} \), is there a vertex cover of size 2? One possible vertex cover is \( \{1, 3\} \), which covers all edges.

# Hamiltonian Path Problem

The **Hamiltonian path problem** asks whether there exists a path in a graph that visits each vertex exactly once. This problem is NP-complete.


## Prove that the Hamiltonian Path is NP-Complete in TOC
A Hamilton cycle is a round trip path along n edges of graph G which visits every vertex once and returns to its starting vertex

Example
Given below is an example of the Hamilton cycle path −


![Hamiltonian](https://github.com/user-attachments/assets/8553e3e2-ea50-4863-aa94-55c1062edd94)

Hamilton cycle path: 1,2,8,7,6,5,4,3,1

TSP is NP-Complete
The travelling salesman problem (TSP) is having a salesman and a set of cities. The salesman needs to visit each one of the cities starting from a certain one and returning to the same city i.e. back to starting position. The challenge of this problem is that the travelling salesman wants to minimise the total length of the trip.



## Proof
To prove TSP is NP-Complete, first try to prove TSP belongs to Non-deterministic Polynomial (NP).

In TSP, we have to find a tour and check that the tour contains each vertex once.

Then, we calculate the total cost of the edges of the tour. Finally, we check if the cost is minimum or not. This can be done in polynomial time.

Therefore, TSP belongs to NP.

Next, we have to prove that TSP is NP-hard.

To prove this, one way is to show that the Hamiltonian cycle ≤p TSP (as we know that the Hamiltonian cycle problem is NP Complete).

Assume G = (V, E) to be an instance of the Hamiltonian cycle.

Hence, an instance of TSP is constructed. We can create the complete graph G' = (V, E'), where

```
E′={(i,j):i,j∈Vandi≠j
Thus, the cost function is defined as follows:
t(i,j)= 0 if (i,j) ∈ E
   =1 otherwise
```
Now, assume that a Hamiltonian cycle H exists in G. The cost of each edge in H is 0 in G' as each edge belongs to E. Therefore, H is having a cost of 0 in G'. Thus, if graph G has a Hamiltonian cycle, then graph G' has a tour of 0 cost.

Now let us assume that G' has a tour H’ of cost at most 0. The cost of edges in E' are 0 and 1 by definition. Hence, each edge must have a cost of 0 as the cost of H’ is 0. We finally conclude that H' contains only edges in E.

Finally proved that G has a Hamiltonian cycle, if and only if G' has a tour of cost at most 0. TSP is NP-complete.






#### Detailed Explanation
Given a graph \( G = (V, E) \), the Hamiltonian path problem seeks to determine if there is a path that visits each vertex exactly once. If such a path exists, it is called a Hamiltonian path.

**Example**: For a graph with vertices \( V = \{A, B, C, D\} \) and edges \( E = \{(A,B), (A,C), (B,C), (B,D), (C,D)\} \), one Hamiltonian path is \( A \rightarrow B \rightarrow D \rightarrow C \).

# Traveling Salesman Problem

The **traveling salesman problem** (TSP) asks whether there exists a tour that visits a set of cities exactly once and returns to the starting city, with the total distance traveled being less than or equal to a given number. This problem is NP-hard.

#### Detailed Explanation
Given a list of cities and the distances between each pair of cities, the TSP seeks the shortest possible route that visits each city exactly once and returns to the origin city. This problem is difficult because the number of possible routes increases factorially with the number of cities.

**Example**: For cities \( \{A, B, C, D\} \) with distances:
- \( A \rightarrow B: 10 \)
- \( A \rightarrow C: 15 \)
- \( A \rightarrow D: 20 \)
- \( B \rightarrow C: 35 \)
- \( B \rightarrow D: 25 \)
- \( C \rightarrow D: 30 \)

The goal is to find the shortest tour that visits each city once and returns to the starting city.

## Contributing

Contributions are welcome! Please feel free to submit a pull request or open an issue to discuss improvements.


# Problem
- [Hamiltonian](https://www.geeksforgeeks.org/proof-hamiltonian-path-np-complete/)
- [Vertex Cover Problem](https://www.geeksforgeeks.org/introduction-and-approximate-solution-for-vertex-cover-problem/)
