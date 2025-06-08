 Read more <a href="https://cse.poriyaan.in/topic/types-of-grammar-and-chomsky-s-hi-hierarchy-of-languages-51052/" target="__blank">Grammar</a>


## Grammar , Type of Grammar

## Grammar in theory of computation is a finite set of formal rules that are generating syntactically correct sentences.

The formal definition of grammar is that it is defined as four tuples −

\[ G = (V, T, P, S) \]

- \( G \) is a grammar, which consists of a set of production rules. It is used to generate the strings of a language.
- \( T \) is the final set of terminal symbols. It is denoted by lower case letters.
- \( V \) is the final set of non-terminal symbols. It is denoted by capital letters.
- \( P \) is a set of production rules, which is used for replacing non-terminal symbols (on the left side of production) in a string with other terminals (on the right side of production).
- \( S \) is the start symbol used to derive the string.

### Grammar is composed of two basic elements:



![image](https://github.com/user-attachments/assets/fd5ef9f5-657d-42b9-af0b-81489faa6296)


- **Terminal Symbols** - Terminal symbols are the components of the sentences that are generated using grammar and are denoted using small case letters like `a`, `b`, `c`, etc.
- **Non-Terminal Symbols** - Non-Terminal Symbols take part in the generation of the sentence but are not the component of the sentence. These types of symbols are also called Auxiliary Symbols and Variables. They are represented using a capital letter like `A`, `B`, `C`, etc.

### Example 1
Consider a grammar:

\[ G = (V, T, P, S) \]

Where,
- \( V = \{ S, A, B \} \)    ⇒ Non-Terminal symbols
- \( T = \{ a, b \} \)        ⇒ Terminal symbols
- Production rules \( P = \{ S \rightarrow ABa, A \rightarrow BB, B \rightarrow ab, AA \rightarrow b \} \)
- \( S = \{ S \} \)           ⇒ Start symbol

### Example 2
Consider a grammar:

\[ G = (V, T, P, S) \]

Where,
- \( V = \{ S, A, B \} \)    ⇒ Non-Terminal symbols
- \( T = \{ 0, 1 \} \)      ⇒ Terminal symbols
- Production rules \( P = \{ S \rightarrow A1B, A \rightarrow 0A \mid \epsilon, B \rightarrow 0B \mid 1B \mid \epsilon \} \)
- \( S = \{ S \} \)          ⇒ Start symbol

### Types of grammar
The different types of grammar:

| Grammar | Language               | Automata                                  | Production rules            |
|---------|------------------------|-------------------------------------------|-----------------------------|
| Type-0  | Recursively enumerable | Turing machine                            | No restriction              |
| Type-1  | Context-sensitive      | Linear-bounded non-deterministic machine  |  αAβ --> αγβ                |
| Type-2  | Context-free           | Non-deterministic push down automata      | A --->γ                     |
| Type-3  | Regular                | Finite state automata                     |  A → αB                     |
|         |                        |                                           |  A → α                      |
 
The diagram representing the types of grammar in the theory of computation (TOC) is as follows:
 
![grammar1](https://github.com/user-attachments/assets/d3f4e42b-cf82-4ccf-8214-2fc38bf15dda)

---
