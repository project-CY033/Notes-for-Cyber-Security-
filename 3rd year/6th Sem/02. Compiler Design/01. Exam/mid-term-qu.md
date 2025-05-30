# 3. Explain Three address code with example – a = (-c + b ) + (-c + d )  Representation of their address code.



**Three Address Code (TAC)** is an intermediate code used by compilers where each instruction has at most three operands (addresses). It is a simplified form of code that breaks down complex expressions into a sequence of simple instructions, each performing a single operation.

### General Structure of TAC:
Each TAC instruction is of the form:  
`result = operand1 operator operand2`

### Example Expression:
Given the expression:  
`a = (-c + b) + (-c + d)`

We will break this down into a sequence of three-address code instructions.

### Step-by-Step Breakdown:

1. **Compute `-c`:**
   - `t1 = -c`  
     (Here, `t1` is a temporary variable holding the negation of `c`.)

2. **Compute `-c + b`:**
   - `t2 = t1 + b`  
     (Now, `t2` holds the result of `-c + b`.)

3. **Compute `-c` again (or reuse `t1` if possible):**
   - Since `-c` is already computed in `t1`, we can reuse `t1` instead of recomputing `-c`.
   - `t3 = t1 + d`  
     (Here, `t3` holds the result of `-c + d`.)

4. **Compute `(-c + b) + (-c + d)`:**
   - `t4 = t2 + t3`  
     (Now, `t4` holds the result of the entire right-hand side.)

5. **Assign the final result to `a`:**
   - `a = t4`  
     (The final value is stored in `a`.)

### Final Three Address Code:
```
t1 = -c
t2 = t1 + b
t3 = t1 + d
t4 = t2 + t3
a = t4
```

### Alternative Approach (Without Reusing `t1`):
If the compiler does not optimize by reusing `t1`, it might recompute `-c`:
```
t1 = -c
t2 = t1 + b
t3 = -c
t4 = t3 + d
t5 = t2 + t4
a = t5
```
 
