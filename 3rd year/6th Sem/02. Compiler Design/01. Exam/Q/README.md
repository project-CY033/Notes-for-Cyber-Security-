# CD-2023

<details>
  <summary>CD-2023</summary>

---

## CD-2023
```

                                                           PART - A 

Q.1 What is bootstrapping? Explain it.
Q.2 Explain all types of translator?
Q.3 What do you mean by context free grammar?
Q.4 What is YACC error handling in LR parser?
Q.5 Define SDD in short.
Q.6 What is DAG in compiler design?
Q.7 What do you mean by activation records?
Q.8 Explain static Vs Dynamic allocation.
Q.9 Give the idea about global data flow analysis.
Q10 What are the various ways to pass a parameter in a function in compiler design?


                                                           PART-B
Q1 What is a compiler? Explain the phases of the complier.
Q.2 What is parsing? Explain top-down parsing with suitable flow chart.
Q3. List the difference between top-down and bottom-up parsing. 
Q4. What is S-Attribute? How it is different from L-attribute?

Q.5 Consider the string 6 * 5 + 8 Construct syntax tree and parse tree for the same. 
Q6. Write a short note on 
(1) Loop optimization
(2) Advantages of DAG


Q7 Explain in brief the various issues of design of a code generator.



                                                           PART - C


Q1. What is Lexical analysis? Explain with diagram. Also, tell how compiler does 
error Handling in Lexical analysis.
Q.2 Explain the various types of parsing techniques.
Q3. What is TAC? Write the TAC for the following expressions - 
(1) If (x+y*z>x*y+z)a=0;
(2) (2+a*(b-c/d)) / e

Q4 Define symbol table and its organization. 
Q5 What is peephole optimization? Explain it in detail.

```

</details>

---



# CD-2021

<details>
  <summary>CD-2021</summary>

---

## CD-2021
```
                                    PART - A

Q.1 What is the difference between compiler and interpreter?
Q.2 Define annotated parse tree.
Q.3 What is dangling reference?
Q.4 Define the "Scope" of a binding (of an identifier to an entity).
Q.5 Give one example of a typical synthesized attribute.
Q.6 Define the following terms and give suitable example for it -
(1) Handle
(2) Handle pruning
Q.7 Define S-R conflict.
Q.8 Define the following terms and give suitable example for it -
(1) Augmented Grammar
(2) LR (0) Item
Q.9 Draw DAG for the statement x = (a + b)* (a + b + c) * (a + b + c + d).
Q.10 Describe stack allocation strategy.


                                    PART - B
Q.1 What do you mean by ambiguous grammar? Show that following is an ambiguous
grammar -
E→E+E | E*E | E-E | E/E | (E) | id

Q.2 Generate LL (1) parsing table for given Grammar -
S→ iEtS | iEtSeS | a
E-b
Is Grammar LL(1) or not?

                                    PART - C
Q.3 What is left recursion? Eliminate the left recursion from the following grammar
E→E+T|T
T→T*F|F
F→ (E) | id

Q.4 Compute the operator precedence relation table and precedence relation graph for given
grammar -
G→E
E→E+T
T→ T*F
F→ id
Q.5 Find FIRST and FOLLOW set for given grammar -
S→ ACB | CbB | Ba, A→ da | BC, B→g | ϵ , C→h | ϵ 

Q.6 Convert the following statement to three address code and prepare the Quadruples and
Triples for the obtained three address code.

do i = i + 1 while (a < v);
Q.7 Consider the following C code -

x = x*0;
for ( i = 1 ; i < 5 i++)
{x = x + 1 ;
y = 10
}
for ( i = 1 i < 5 i ++)
{ y = y *2;
}

Apply all possible code optimization techniques on above code and write final optimize code.

                                                   PART - C
Q.1 (a) What is activation record? Explain stack allocation of activation records using an example. https://www.btubikaner.com
    (b) Explain three loop optimization techniques with example.

Q.2 (a) Describe code generator design issue.
    (b) What is intermediate code? Explain different types of intermediate code representations. Also discuss importance of intermediate code.

Q.3 (a) What are the different phases of compiler? Explain all the phases in detail. Write down the output of each phase for the expression a: = b + c*50.
    (b) Elaborate recognition of tokens (in the context of compiler design) in detail.

Q.4 (a) What is symbol table? For what purpose, compiler uses symbol table? Explain symbol table organization in detail.
    (b) Explain different parameter passing methods with suitable example.

Q.5 Define syntax tree. Explain S-attributed and L-attributed definitions in detail.


```


</details>

---










# CD-2020

<details>
  <summary>CD-2020</summary>

---

## CD-2020
```
                            PART-A
Q.1 What do you mean by Lexemes?
Q.2 Design a finite automata machine for the regular expression ab (cId)+ f.
Q.3 What are the four possible actions a shift-reduce parser can make?
Q.4 When a grammar is said to be an ambiguous grammar?
Q.5 What do you mean by synthesized attributes?
Q.6 What do you mean by annotated parse tree?
Q.7 What information is stored in symbol table?
Q.8 What do you mean by nesting depth?
Q.9 List the various types of local optimization techniques.
Q.10 Explain leader in basic block.

                            PART-B
Q.1 Write a lex program to count number of words, lines and characters in an input string.
Q.2 Explain various types of translator in detail.
Q3 Consider the following grammar-
E→E+E|E* E|id
(a) Construct Operator Precedence Table.
(b) Find the Operator Precedence Functions.

Q4 Calculate the first and follow functions for the given grammar -
S→ACB | CbB | Ba  
A→ da | Bc
B→g|ϵ 
C→h|ϵ 
where ϵ  is an epsilon (i.e empty string).

Q5. Generate a three address code for following code -
While (s < d)
if (x < y)
    z=a+b*c
else
    z = 0

Q6. Generate activation records and activation tree for the following code by assuming that initially 4 value is passed to the fun function (i.e N = 4 ) .
int fun (in + N) {
if (N ==1)
return 0;
else if (N == 2)
return 1;
return fun (N - 1) + fun(N - 2); }

Q.7 Consider the following expression and construct a Directed Acyclic Graph (i.e DAG) for it -
(((a + a) + (a + a))+((a + a) + (a + a)))




                            PART-C
Q.1 Illustrate the translation of following statement on all phases of compiler -
c = a * (- b) + 10 / d
Q.2 Consider the following grammar -
S→CC
C→cC|d
Construct parsing table for LALR (1) parser and parse the input string ccdd.

Q.3 Explain all parameter passing techniques with examples.
Q.4 Use simple code Generator algorithm to translate following three address statement into target code.
t=a-b
u=a-c
v=t+u
a = d
d=v+u

Q.5 Use below mentioned syntax directed definition to generate a syntax tree for the input
string b - c + a + 7
| Production     | Semantic Rules                           |
|----------------|------------------------------------------|
| (1) E → E₁ + T | E.node = new Node ('+', E₁.node, T.node) |
| (2) E → E₁ - T | E.node = new Node ('-', E₁.node, T.node) |
| (3) E → T      | E.node = T.node                          |
| (4) T → (E)    | T.node = E.node                          |
| (5) T → id     | T.node = new Leaf (id, id.entry)         |
| (6) T → num    | T.node = new Leaf (num, num.val)         |

in above syntax directed definition, id and num are identifier and number respectively.


```


</details>

---

