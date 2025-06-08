 # Table of Contents

1. [Installation of Python, and learning interactively at command prompt and writing simple programs](#installation-and-simple-programs)
2. [Perform operations on Python built-in data types: Strings, List, Tuples, Dictionary, Set](#data-types-operations)
3. [Solve problems using decision and looping statements](#decision-and-looping-statements)
4. [Handle numerical operations using math and random number functions](#numerical-operations)
5. [Create user-defined functions with different types of function arguments](#user-defined-functions)
6. [Perform File manipulations](#file-manipulations)
7. [Matrix addition, multiplications, and unity matrix](#matrix-operations)
8. [Text processing and CSV file operations](#text-processing-and-csv-operations)
9. [Intrinsic NumPy objects and Random Functions](#numpy-objects-and-operations)
10. [Programs related to python libraries like Numpy, Pandas, Scipy](#python-libraries-programs)

## 1. Installation of Python, and learning interactively at command prompt and writing simple programs

To install Python, download the installer from [Python's official website](https://www.python.org/downloads/). Follow the instructions for your operating system.

```python
# Simple Python Program
print("Hello, World!")
```

**Output:**

```plaintext
Hello, World!
```

## 2. Perform operations on Python built-in data types: Strings, List, Tuples, Dictionary, Set

```python
# Strings
string = "Hello"
print(string[1])  # Indexing
print(string[1:4])  # Slicing
print(string + " World")  # Concatenation
print(string * 3)  # Repetition

# Lists
list1 = [1, 2, 3]
print(list1[0])  # Indexing
print(list1[1:3])  # Slicing
print(list1 + [4, 5])  # Concatenation
print(list1 * 2)  # Repetition

# Tuples
tuple1 = (1, 2, 3)
print(tuple1[0])  # Indexing
print(tuple1[1:3])  # Slicing
print(tuple1 + (4, 5))  # Concatenation
print(tuple1 * 2)  # Repetition

# Dictionary
dict1 = {'a': 1, 'b': 2}
print(dict1['a'])  # Indexing
dict1['c'] = 3  # Adding new element
print(dict1)

# Set
set1 = {1, 2, 3}
set1.add(4)  # Adding new element
print(set1)
set1.remove(2)  # Removing element
print(set1)
```

**Output:**

```plaintext
e
ell
Hello World
HelloHelloHello
1
[2, 3]
[1, 2, 3, 4, 5]
[1, 2, 3, 1, 2, 3]
1
(2, 3)
(1, 2, 3, 4, 5)
(1, 2, 3, 1, 2, 3)
1
{'a': 1, 'b': 2, 'c': 3}
{1, 2, 3, 4}
{1, 3, 4}
```

## 3. Solve problems using decision and looping statements

```python
# Decision statements
x = 10
if x > 5:
    print("x is greater than 5")
elif x == 5:
    print("x is equal to 5")
else:
    print("x is less than 5")

# Looping statements
for i in range(5):
    print(i)

i = 0
while i < 5:
    print(i)
    i += 1
```

**Output:**

```plaintext
x is greater than 5
0
1
2
3
4
0
1
2
3
4
```

## 4. Handle numerical operations using math and random number functions

```python
import math
import random

# Math functions
print(math.sqrt(16))
print(math.factorial(5))
print(math.sin(math.pi/2))

# Random number functions
print(random.randint(1, 10))
print(random.choice([1, 2, 3, 4, 5]))
print(random.random())  # Random float between 0 and 1
```

**Output:**

```plaintext
4.0
120
1.0
5
3
0.6782440716422497
```

## 5. Create user-defined functions with different types of function arguments

```python
def greet(name):
    return "Hello, " + name

def add(a, b):
    return a + b

def multiply(*args):
    result = 1
    for num in args:
        result *= num
    return result

print(greet("Alice"))
print(add(3, 5))
print(multiply(1, 2, 3, 4))
```

**Output:**

```plaintext
Hello, Alice
8
24
```

## 6. Perform File manipulations

```python
# Write to a file
with open('test.txt', 'w') as file:
    file.write("Hello, World!")

# Read from a file
with open('test.txt', 'r') as file:
    print(file.read())

# Append to a file
with open('test.txt', 'a') as file:
    file.write("\nAppended Text")

# Copy content from one file to another
with open('test.txt', 'r') as src_file:
    with open('copy.txt', 'w') as dest_file:
        dest_file.write(src_file.read())

# Read from the copied file
with open('copy.txt', 'r') as file:
    print(file.read())
```

**Output:**

```plaintext
Hello, World!
Hello, World!
Appended Text
```

## 7. Matrix addition, multiplications, and unity matrix

```python
import numpy as np

# Matrix addition
matrix1 = np.array([[1, 2], [3, 4]])
matrix2 = np.array([[5, 6], [7, 8]])
print(np.add(matrix1, matrix2))

# Matrix multiplication
print(np.dot(matrix1, matrix2))

# Unity matrix
print(np.identity(3))
```

**Output:**

```plaintext
[[ 6  8]
 [10 12]]
[[19 22]
 [43 50]]
[[1. 0. 0.]
 [0. 1. 0.]
 [0. 0. 1.]]
```

## 8. Text processing and CSV file operations

```python
import csv

# Read CSV file
with open('data.csv', 'r') as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)

# Write CSV file
with open('output.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["Name", "Age"])
    writer.writerow(["Alice", 25])
    writer.writerow(["Bob", 30])

# Statistical operations using pandas
import pandas as pd

df = pd.read_csv('data.csv')
print(df.describe())

# Comparison operations
print(df[df['Age'] > 25])
```

**Output:**

```plaintext
['Name', 'Age']
['Alice', '25']
['Bob', '30']
        Age
count   2.0
mean   27.5
std     3.5
min    25.0
25%    26.25
50%    27.5
75%    28.75
max    30.0
   Name  Age
1   Bob   30
```

## 9. Intrinsic NumPy objects and Random Functions

```python
import numpy as np

# NumPy array creation
array = np.array([1, 2, 3, 4])
print(array)

# Indexing and Slicing
print(array[1])
print(array[1:3])

# Reshaping
reshaped_array = array.reshape((2, 2))
print(reshaped_array)

# Joining and Splitting
array1 = np.array([1, 2])
array2 = np.array([3, 4])
joined_array = np.concatenate((array1, array2))
print(joined_array)

split_array = np.split(joined_array, 2)
print(split_array)

# Random functions
print(np.random.randint(1, 10, size=(2, 3)))
print(np.random.rand(2, 2))
```

**Output:**

```plaintext
[1 2 3 4]
2
[2 3]
[[1 2]
 [3 4]]
[1 2 3 4]
[array([1, 2]), array([3, 4])]
[[6 1 6]
 [7 9 8]]
[[0.32637901 0.28247779]
 [0.04874684 0.18891699]]
```

## 10. Programs related to python libraries like Numpy, Pandas, Scipy

```python
# Using Numpy
import numpy as

 np

array = np.array([1, 2, 3, 4])
print(array.mean())

# Using Pandas
import pandas as pd

data = {'Name': ['Alice', 'Bob'], 'Age': [25, 30]}
df = pd.DataFrame(data)
print(df)

# Using Scipy
from scipy import stats

data = [1, 2, 2, 3, 4]
mode = stats.mode(data)
print(mode)
```

**Output:**

```plaintext
2.5
    Name  Age
0  Alice   25
1    Bob   30
ModeResult(mode=array([2]), count=array([2]))
```
