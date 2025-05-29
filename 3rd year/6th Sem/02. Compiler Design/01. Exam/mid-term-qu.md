## Three-address code is an intermediate code used by compilers to represent code in a more abstract form than assembly language, yet more detailed than high-level code. It typically involves at most three operands per instruction, which can be registers, memory locations, or constants.

---

## Characteristics of Three-Address Code:
### 1. **At most three operands per instruction**: Typically, two operands for input and one for output.
2. **Simple operations**: Each instruction performs a simple operation like addition, subtraction, multiplication, etc.
3. **Temporary variables**: Often uses temporary variables to store intermediate results.
---

![image](https://github.com/user-attachments/assets/311ba513-071d-4a73-a040-c81e5ea19444)


---

![image](https://github.com/user-attachments/assets/06b87cac-668c-4e27-9814-4b01b614efd3)


---

![image](https://github.com/user-attachments/assets/15b73144-583a-4cd8-a139-64cd89a6f661)

---

![image](https://github.com/user-attachments/assets/80f5634a-66f3-4ce5-b3f3-381476078efe)


---
---



<details>

<summary>2 method for question 3 </summary>

---
---

# **Three-Address Code (TAC) in Compiler Design**

Three-address code (TAC) is an intermediate representation used in compilers where each instruction has **at most three operands** (variables or constants). It simplifies expressions into a sequence of simple operations.

## **Key Features of Three-Address Code**
1. **Each instruction has at most three operands** (hence the name).
2. **Temporary variables** (`t1, t2, ...`) are introduced to store intermediate results.
3. **Operations** include arithmetic, logical, assignments, and control flow.
4. **Easy to translate** into machine code or optimize.

---

## **Example: Conversion of `a = (-c + b) + (-c + d)` to Three-Address Code**

### **Step-by-Step Conversion**
Given the expression:
```
a = (-c + b) + (-c + d)
```
We break it down into smaller operations:

1. **First Negation (`-c`)**  
   ```
   t1 = -c
   ```
2. **First Addition (`-c + b`)**  
   ```
   t2 = t1 + b
   ```
3. **Second Negation (`-c` again, but we reuse `t1` if possible)**  
   (Assuming no optimization, we recompute it.)  
   ```
   t3 = -c
   ```
4. **Second Addition (`-c + d`)**  
   ```
   t4 = t3 + d
   ```
5. **Final Addition (`(-c + b) + (-c + d)`)**  
   ```
   t5 = t2 + t4
   ```
6. **Assignment (`a = ...`)**  
   ```
   a = t5
   ```

### **Final Three-Address Code**
| Line | Instruction   | Explanation                |
|------|--------------|----------------------------|
| 1    | `t1 = -c`    | Compute `-c`               |
| 2    | `t2 = t1 + b`| Compute `(-c) + b`         |
| 3    | `t3 = -c`    | Recompute `-c` (could reuse `t1` if optimized) |
| 4    | `t4 = t3 + d`| Compute `(-c) + d`         |
| 5    | `t5 = t2 + t4`| Compute `(-c + b) + (-c + d)` |
| 6    | `a = t5`     | Assign final result to `a` |

### **Optimized Version (Reusing `t1`)**
If the compiler performs **common subexpression elimination (CSE)**, it avoids recomputing `-c`:
| Line | Instruction   | Explanation                |
|------|--------------|----------------------------|
| 1    | `t1 = -c`    | Compute `-c` once          |
| 2    | `t2 = t1 + b`| Compute `(-c) + b`         |
| 3    | `t3 = t1 + d`| Compute `(-c) + d` (reusing `t1`) |
| 4    | `t4 = t2 + t3`| Compute `(-c + b) + (-c + d)` |
| 5    | `a = t4`     | Assign final result to `a` |

---

## **Different Representations of Three-Address Code**
TAC can be represented in multiple ways:

### **(1) Quadruples (4-tuples)**
Each instruction is stored as `(op, arg1, arg2, result)`.

| #  | op  | arg1 | arg2 | result |
|----|-----|------|------|--------|
| 1  | `-` | `c`  | -    | `t1`   |
| 2  | `+` | `t1` | `b`  | `t2`   |
| 3  | `-` | `c`  | -    | `t3`   |
| 4  | `+` | `t3` | `d`  | `t4`   |
| 5  | `+` | `t2` | `t4` | `t5`   |
| 6  | `=` | `t5` | -    | `a`    |

### **(2) Triples (3-tuples)**
Each instruction is stored as `(op, arg1, arg2)`, and results are referenced by their position.

| #  | op  | arg1 | arg2 |
|----|-----|------|------|
| 1  | `-` | `c`  | -    |
| 2  | `+` | (1)  | `b`  |
| 3  | `-` | `c`  | -    |
| 4  | `+` | (3)  | `d`  |
| 5  | `+` | (2)  | (4)  |
| 6  | `=` | `a`  | (5)  |



---

 


</details>

---
---
---
