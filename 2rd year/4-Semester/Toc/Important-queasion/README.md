# Theory of Computation: Exam Preparation

## Part-A: Short Answer Type Questions (2 marks each)

1. **Define a finite automaton.**  
   **Answer:** A finite automaton is a mathematical model of computation with a finite number of states used to recognize regular languages.

2. **What is the difference between deterministic and nondeterministic finite automata?**  
   **Answer:** DFA has a single transition per input symbol for each state, whereas NFA can have multiple transitions or none for the same input symbol.

3. **Explain what a context-free grammar is.**  
   **Answer:** A context-free grammar (CFG) is a set of production rules used to define context-free languages, with rules of the form A → α, where A is a non-terminal and α is a string of terminals and non-terminals.

4. **What is the purpose of a pushdown automaton (PDA)?**  
   **Answer:** A PDA extends a finite automaton with a stack to recognize context-free languages by handling nested structures and recursion.

5. **What is a Turing machine?**  
   **Answer:** A Turing machine is a theoretical computing device with an infinite tape and a set of rules for manipulating symbols, used to define computability.

6. **What is the Chomsky Hierarchy?**  
   **Answer:** The Chomsky Hierarchy classifies languages into four types: regular, context-free, context-sensitive, and recursively enumerable.

7. **Define a regular expression.**  
   **Answer:** A regular expression is a sequence of characters defining a search pattern for matching strings within a text.

8. **What is a recursive language?**  
   **Answer:** A recursive language is a language for which there is a Turing machine that always halts and accepts or rejects every input.

9. **What is an example of a context-sensitive language?**  
   **Answer:** The language `{a^n b^n c^n | n ≥ 1}` is an example of a context-sensitive language.

10. **What does the Pumping Lemma for regular languages state?**  
    **Answer:** The Pumping Lemma states that for any regular language, there exists a length `p` such that any string longer than `p` can be split into parts that can be "pumped" to produce new strings within the language.

11. **Explain the purpose of converting a CFG to Chomsky Normal Form (CNF).**  
    **Answer:** CNF simplifies parsing and theoretical analysis by ensuring all productions are of a specific form.

12. **What is a Mealy machine?**  
    **Answer:** A Mealy machine is a type of finite automaton where the output depends on both the current state and the input symbol.

13. **What is a Moore machine?**  
    **Answer:** A Moore machine is a type of finite automaton where the output depends only on the current state, not the input symbol.

14. **Describe the significance of the Halting Problem.**  
    **Answer:** The Halting Problem is significant as it is an example of an undecidable problem, demonstrating the limits of computation.

15. **What is the role of a stack in a pushdown automaton?**  
    **Answer:** The stack in a PDA provides additional memory to handle nested structures and context-free languages.

## Part-B: Analytical/Problem Solving Questions (5 marks each)

1. **Prove that the class of regular languages is closed under the operation of union.**  
   **Answer:** Given two DFAs, \( M1 \) and \( M2 \), for languages \( L1 \) and \( L2 \), construct a new DFA \( M \) for \( L1 \cup L2 \) by creating a product automaton where:
     - The states of \( M \) are pairs \((s1, s2)\), where \( s1 \) is a state in \( M1 \) and \( s2 \) is a state in \( M2 \).
     - The transition function is defined based on the transitions of \( M1 \) and \( M2 \).
     - The start state is \((s_{start1}, s_{start2})\), and the accepting states are pairs where at least one component is an accepting state in its respective DFA.
   - **Result:** \( M \) recognizes \( L1 \cup L2 \), proving closure under union.

2. **Describe and prove the minimization process of a DFA with an example.**  
   **Answer:** 
     - **Remove Unreachable States:** Identify and eliminate states not reachable from the start state.
     - **Partition States:** Group states into equivalence classes based on their transitions and acceptance conditions.
     - **Merge Equivalent States:** Combine states within the same equivalence class into a single state.
   - **Example:** Suppose a DFA with states `{A, B, C}`, where `A` is the start state, and `B` and `C` are equivalent because they transition to the same states on the same input symbols. Merge `B` and `C` into a single state, resulting in a DFA with fewer states.

3. **Prove that context-free languages are closed under union and intersection.**  
   **Answer:** 
     - **Union:** Given two CFGs, \( G1 \) and \( G2 \), for languages \( L1 \) and \( L2 \), construct a CFG for \( L1 \cup L2 \) by combining \( G1 \) and \( G2 \) and adding a new start symbol that can derive either \( L1 \) or \( L2 \).
     - **Intersection:** Context-free languages are not closed under intersection. However, if \( L1 \) and \( L2 \) are context-free, their intersection can be expressed as \( L1 \cap L2 = L1 \cap \overline{L1} \), where \( \overline{L1} \) is the complement of \( L1 \).

4. **Discuss the importance and process of converting a CFG to Chomsky Normal Form (CNF).**  
   **Answer:** 
     - **Importance:** CNF simplifies parsing algorithms and provides a standard form for CFGs, facilitating various theoretical results and practical algorithms like the CYK parser.
     - **Process:**
       - **Eliminate ε-productions:** Remove productions that derive the empty string.
       - **Eliminate unit productions:** Remove productions where a non-terminal derives another single non-terminal.
       - **Convert to CNF:** Ensure all productions are of the form \( A \rightarrow BC \) or \( A \rightarrow a \), where \( A \), \( B \), and \( C \) are non-terminals and \( a \) is a terminal.

5. **Illustrate the concept of a universal Turing machine and its significance.**  
   **Answer:** 
     - **Concept:** A universal Turing machine can simulate any other Turing machine. It takes a description of another Turing machine and an input for that machine as its input and simulates the behavior of the described machine.
     - **Significance:** Demonstrates the concept of universality and the foundation of modern computing where a single machine can perform any computation.

6. **Explain the concept of computability and its importance in theoretical computer science.**  
   **Answer:** 
     - **Concept:** Computability refers to the ability of a problem to be solved by an algorithm or Turing machine. It defines what problems can be effectively computed.
     - **Importance:** Helps in understanding the limitations of computation, classifying problems into computable and non-computable, and exploring the boundaries of algorithmic solutions.

7. **Discuss the role of context-sensitive grammars in the Chomsky hierarchy with examples.**  
   **Answer:** 
     - **Role:** Context-sensitive grammars (Type 1) generate context-sensitive languages, which are more powerful than context-free languages but less powerful than unrestricted grammars (Type 0).
     - **Examples:** 
       - **Example Language:** The language of strings where the number of `a`s is equal to the number of `b`s and `c`s (`{a^n b^n c^n | n ≥ 1}`).

8. **Describe how regular expressions can be used to design finite automata with an example.**  
   **Answer:** 
     - **Design Process:** Convert the regular expression to an NDFA using Thompson's construction, then convert the NDFA to a DFA using the subset construction method.
     - **Example:** For the regular expression `(a|b)*c`, build an NDFA for `(a|b)*` and combine it with a transition to `c`. Convert to DFA for matching the pattern.

9. **Explain the concept of decidability and provide examples of decidable and undecidable problems.**  
   **Answer:** 
     - **Decidability:** A problem is decidable if there is an algorithm that can determine the answer in finite time for any input.
     - **Examples:**
       - **Decidable:** The problem of checking whether a string belongs to a regular language.
       - **Undecidable:** The Halting Problem, where it's impossible to determine if a given Turing machine halts for every possible input.

10. **Discuss the differences between deterministic and nondeterministic pushdown automata (PDA) with examples.**  
    **Answer:** 
      - **Deterministic PDA:** Has a unique transition for each state, input symbol, and stack symbol. Example: Parsing a balanced parenthesis string.
      - **Nondeterministic PDA:** Allows multiple transitions and can handle more complex languages. Example: Parsing nested constructs with varying valid configurations.

11. **Explain the concept of recursive and recursively enumerable languages with examples.**  
    **Answer:** 
      - **Recursive Languages:** Languages for which there is a Turing machine that halts and accepts for every input. Example: The language of all even-length binary strings.
      - **Recursively Enumerable Languages:** Languages for which there is a Turing machine that accepts the strings in the language but may not halt for strings not in the language. Example: The language of Turing machines that halt on a given input.

12. **Discuss the concept of closure properties for regular languages with examples.**  
    **Answer:** 
      - **Closure Properties:** Regular languages are closed under operations like union, intersection, concatenation, and Kleene star.
      - **Examples:**
        - **Union:** The union of two regular languages is also regular.
        - **Intersection:** The intersection of two regular languages is also regular.

13. **Describe the minimization process of a DFA and its significance.**  
    **Answer:** 
      - **Minimization Process:** 
        - **Remove Unreachable States:** Eliminate states not reachable from the start state.
        - **Partition States:** Group states into equivalence classes based on their transitions and acceptance conditions.
        - **Merge Equivalent States:** Combine states within the same equivalence class into a single state.
      - **Significance:** Produces the smallest DFA equivalent to a given DFA, optimizing state usage.

14. **Discuss the significance of the Pumping Lemma for regular languages with an example.**  
    **Answer:** 
      - **Significance:** The Pumping Lemma helps in proving that certain languages are not regular by demonstrating that strings in the language cannot be pumped without violating regularity.
      - **Example:** To show `{a^n b^n | n ≥ 0}` is not regular, use the Pumping Lemma to prove that no matter how the string is divided and pumped, it fails to satisfy the condition.

15. **Illustrate the process of converting a regular expression to a finite automaton with an example.**  
    **Answer:** 
      - **Process:** Convert the regular expression to an NDFA using Thompson's construction method, then convert the NDFA to a DFA using the subset construction method.
      - **Example:** For the regular expression `(a|b)*c`, first create an NDFA for `(a|b)*` followed by an NDFA for `c`. Combine these to form a DFA.

## Part-C: Descriptive/Analytical/Problem Solving Questions (10 marks each)

1. **Prove that the class of regular languages is closed under the operation of union.**  
   **Answer:** Given two DFAs, \( M1 \) and \( M2 \), for languages \( L1 \) and \( L2 \), construct a new DFA \( M \) for \( L1 \cup L2 \) by creating a product automaton where:
     - The states of \( M \) are pairs \((s1, s2)\), where \( s1 \) is a state in \( M1 \) and \( s2 \) is a state in \( M2 \).
     - The transition function is defined based on the transitions of \( M1 \) and \( M2 \).
     - The start state is \((s_{start1}, s_{start2})\), and the accepting states are pairs where at least one component is an accepting state in its respective DFA.
   - **Result:** \( M \) recognizes \( L1 \cup L2 \), proving closure under union.

2. **Describe and prove the minimization process of a DFA with an example.**  
   **Answer:** 
     - **Remove Unreachable States:** Identify and eliminate states not reachable from the start state.
     - **Partition States:** Group states into equivalence classes based on their transitions and acceptance conditions.
     - **Merge Equivalent States:** Combine states within the same equivalence class into a single state.
   - **Example:** Suppose a DFA with states `{A, B, C}`, where `A` is the start state, and `B` and `C` are equivalent because they transition to the same states on the same input symbols. Merge `B` and `C` into a single state, resulting in a DFA with fewer states.

3. **Prove that context-free languages are closed under union and intersection.**  
   **Answer:** 
     - **Union:** Given two CFGs, \( G1 \) and \( G2 \), for languages \( L1 \) and \( L2 \), construct a CFG for \( L1 \cup L2 \) by combining \( G1 \) and \( G2 \) and adding a new start symbol that can derive either \( L1 \) or \( L2 \).
     - **Intersection:** Context-free languages are not closed under intersection. However, if \( L1 \) and \( L2 \) are context-free, their intersection can be expressed as \( L1 \cap L2 = L1 \cap \overline{L1} \), where \( \overline{L1} \) is the complement of \( L1 \).

4. **Discuss the importance and process of converting a CFG to Chomsky Normal Form (CNF).**  
   **Answer:** 
     - **Importance:** CNF simplifies parsing algorithms and provides a standard form for CFGs, facilitating various theoretical results and practical algorithms like the CYK parser.
     - **Process:**
       - **Eliminate ε-productions:** Remove productions that derive the empty string.
       - **Eliminate unit productions:** Remove productions where a non-terminal derives another single non-terminal.
       - **Convert to CNF:** Ensure all productions are of the form \( A \rightarrow BC \) or \( A \rightarrow a \), where \( A \), \( B \), and \( C \) are non-terminals and \( a \) is a terminal.

5. **Illustrate the concept of a universal Turing machine and its significance.**  
   **Answer:** 
     - **Concept:** A universal Turing machine can simulate any other Turing machine. It takes a description of another Turing machine and an input for that machine as its input and simulates the behavior of the described machine.
     - **Significance:** Demonstrates the concept of universality and the foundation of modern computing where a single machine can perform any computation.

6. **Explain the concept of computability and its importance in theoretical computer science.**  
   **Answer:** 
     - **Concept:** Computability refers to the ability of a problem to be solved by an algorithm or Turing machine. It defines what problems can be effectively computed.
     - **Importance:** Helps in understanding the limitations of computation, classifying problems into computable and non-computable, and exploring the boundaries of algorithmic solutions.

7. **Discuss the role of context-sensitive grammars in the Chomsky hierarchy with examples.**  
   **Answer:** 
     - **Role:** Context-sensitive grammars (Type 1) generate context-sensitive languages, which are more powerful than context-free languages but less powerful than unrestricted grammars (Type 0).
     - **Examples:** 
       - **Example Language:** The language of strings where the number of `a`s is equal to the number of `b`s and `c`s (`{a^n b^n c^n | n ≥ 1}`).

8. **Describe how regular expressions can be used to design finite automata with an example.**  
   **Answer:** 
     - **Design Process:** Convert the regular expression to an NDFA using Thompson's construction, then convert the NDFA to a DFA using the subset construction method.
     - **Example:** For the regular expression `(a|b)*c`, build an NDFA for `(a|b)*` and combine it with a transition to `c`. Convert to DFA for matching the pattern.

9. **Explain the concept of decidability and provide examples of decidable and undecidable problems.**  
   **Answer:** 
     - **Decidability:** A problem is decidable if there is an algorithm that can determine the answer in finite time for any input.
     - **Examples:**
       - **Decidable:** The problem of checking whether a string belongs to a regular language.
       - **Undecidable:** The Halting Problem, where it's impossible to determine if a given Turing machine halts for every possible input.

10. **Discuss the differences between deterministic and nondeterministic pushdown automata (PDA) with examples.**  
    **Answer:** 
      - **Deterministic PDA:** Has a unique transition for each state, input symbol, and stack symbol. Example: Parsing a balanced parenthesis string.
      - **Nondeterministic PDA:** Allows multiple transitions and can handle more complex languages. Example: Parsing nested constructs with varying valid configurations.

11. **Explain the concept of recursive and recursively enumerable languages with examples.**  
    **Answer:** 
      - **Recursive Languages:** Languages for which there is a Turing machine that halts and accepts for every input. Example: The language of all even-length binary strings.
      - **Recursively Enumerable Languages:** Languages for which there is a Turing machine that accepts the strings in the language but may not halt for strings not in the language. Example: The language of Turing machines that halt on a given input.

12. **Discuss the concept of closure properties for regular languages with examples.**  
    **Answer:** 
      - **Closure Properties:** Regular languages are closed under operations like union, intersection, concatenation, and Kleene star.
      - **Examples:**
        - **Union:** The union of two regular languages is also regular.
        - **Intersection:** The intersection of two regular languages is also regular.

13. **Describe the minimization process of a DFA and its significance.**  
    **Answer:** 
      - **Minimization Process:** 
        - **Remove Unreachable States:** Eliminate states not reachable from the start state.
        - **Partition States:** Group states into equivalence classes based on their transitions and acceptance conditions.
        - **Merge Equivalent States:** Combine states within the same equivalence class into a single state.
      - **Significance:** Produces the smallest DFA equivalent to a given DFA, optimizing state usage.

14. **Discuss the significance of the Pumping Lemma for regular languages with an example.**  
    **Answer:** 
      - **Significance:** The Pumping Lemma helps in proving that certain languages are not regular by demonstrating that strings in the language cannot be pumped without violating regularity.
      - **Example:** To show `{a^n b^n | n ≥ 0}` is not regular, use the Pumping Lemma to prove that no matter how the string is divided and pumped, it fails to satisfy the condition.

15. **Illustrate the process of converting a regular expression to a finite automaton with an example.**  
    **Answer:** 
      - **Process:** Convert the regular expression to an NDFA using Thompson's construction method, then convert the NDFA to a DFA using the subset construction method.
      - **Example:** For the regular expression `(a|b)*c`, first create an NDFA for `(a|b)*` followed by an NDFA for `c`. Combine these to form a DFA.
