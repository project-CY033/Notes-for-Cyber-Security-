 

### 1  Introduction to Python

#### Why Python?
- **Easy to Learn and Use**: Python has a simple syntax which makes it accessible for beginners.
- **Versatile and Powerful**: Suitable for web development, data analysis, artificial intelligence, scientific computing, and more.
- **Large Community and Support**: Extensive documentation, community forums, and third-party modules.
- **Cross-Platform Compatibility**: Works on various operating systems like Windows, macOS, Linux, etc.
- **Integration Capabilities**: Can easily integrate with other languages and technologies like C, C++, Java, and more.

#### Essential Python Libraries
- **NumPy**: For numerical computations.
- **Pandas**: For data manipulation and analysis.
- **Matplotlib**: For data visualization.
- **Scikit-learn**: For machine learning.
- **TensorFlow/PyTorch**: For deep learning.
- **Requests**: For making HTTP requests.
- **Beautiful Soup**: For web scraping.
- **Django/Flask**: For web development.

### Python Introduction

#### Features
- **Simple and Easy to Learn**: User-friendly syntax and readability.
- **Interpreted Language**: No need for compilation; code is executed line by line.
- **Dynamically Typed**: No need to declare variable types.
- **High-level Language**: Abstracts complex programming details.
- **Object-Oriented**: Supports classes and objects.
- **Extensive Libraries**: Large standard library and many third-party libraries.
- **Portable**: Can run on various operating systems without modification.
- **Embeddable**: Can be embedded within C/C++ programs.

#### Data Types
- **Numbers**: int, float, complex.
- **Sequences**: list, tuple, range.
- **Strings**: str.
- **Binary Types**: bytes, bytearray, memoryview.
- **Mappings**: dict.
- **Sets**: set, frozenset.
- **Boolean**: bool.

#### Variables
- **Definition**: Storage location paired with a symbolic name (identifier) that contains some known or unknown quantity or information.
- **Dynamic Typing**: Variable types are determined at runtime.

#### Expressions
- **Arithmetic Expressions**: `+, -, *, /, %, //, **`.
- **Relational Expressions**: `==, !=, >, <, >=, <=`.
- **Logical Expressions**: `and, or, not`.
- **Bitwise Expressions**: `&, |, ^, ~, <<, >>`.

#### Operators
- **Arithmetic Operators**: `+, -, *, /, %, //, **`.
- **Assignment Operators**: `=, +=, -=, *=, /=, %=, //=, **=`.
- **Comparison Operators**: `==, !=, >, <, >=, <=`.
- **Logical Operators**: `and, or, not`.
- **Bitwise Operators**: `&, |, ^, ~, <<, >>`.
- **Membership Operators**: `in, not in`.
- **Identity Operators**: `is, is not`.

#### Identifiers
- **Naming Rules**: 
  - Must start with a letter (a-z, A-Z) or an underscore (_).
  - Followed by letters, digits (0-9), or underscores.
  - Case-sensitive.
  - Cannot be a reserved word.

#### Reserved Words
- **Definition**: Keywords that have special meaning in Python and cannot be used as identifiers.
- **Examples**: `False, None, True, and, as, assert, async, await, break, class, continue, def, del, elif, else, except, finally, for, from, global, if, import, in, is, lambda, nonlocal, not, or, pass, raise, return, try, while, with, yield`.

#### Indentation
- **Definition**: Used to define the scope of loops, functions, classes, and other constructs.
- **Importance**: Python relies on indentation (whitespace) to determine the structure of the code.

#### Comments
- **Single-Line Comments**: Start with `#`.
  - Example: `# This is a comment`.
- **Multi-Line Comments**: Enclosed within triple quotes `'''` or `"""`.
  - Example: 
    ```python
    """
    This is a 
    multi-line comment
    """
    ```

























  ### 2. Decision Making

#### `if` statement
- **Definition**: Executes a block of code if a condition is true.
- **Syntax**:
  ```python
  if condition:
      # block of code
  ```

#### `if-else` statement
- **Definition**: Executes one block if the condition is true, and another block if it's false.
- **Syntax**:
  ```python
  if condition:
      # block of code if condition is true
  else:
      # block of code if condition is false
  ```

#### Nested `if`
- **Definition**: Using an `if` statement inside another `if` statement.
- **Syntax**:
  ```python
  if condition1:
      if condition2:
          # block of code if both conditions are true
  ```

#### `if-elif` ladder
- **Definition**: Multiple `if` conditions in sequence.
- **Syntax**:
  ```python
  if condition1:
      # block of code if condition1 is true
  elif condition2:
      # block of code if condition2 is true
  else:
      # block of code if none of the conditions are true
  ```

### 2. Iterative Statements

#### `while` loop
- **Definition**: Repeats a block of code while a condition is true.
- **Syntax**:
  ```python
  while condition:
      # block of code
  ```

#### `for` loop
- **Definition**: Iterates over a sequence (e.g., list, string, range).
- **Syntax**:
  ```python
  for item in sequence:
      # block of code
  ```

#### Nested loops
- **Definition**: Loops within loops.
- **Syntax**:
  ```python
  for i in range(outer_range):
      for j in range(inner_range):
          # block of code
  ```

#### `else` in loops
- **Definition**: Executes when the loop completes normally (without a `break`).
- **Syntax**:
  ```python
  for item in sequence:
      # block of code
  else:
      # block of code if loop completes normally
  ```

#### `break`
- **Definition**: Exits the loop prematurely.
- **Syntax**:
  ```python
  for item in sequence:
      if condition:
          break
  ```

#### `continue`
- **Definition**: Skips the current iteration and moves to the next one.
- **Syntax**:
  ```python
  for item in sequence:
      if condition:
          continue
  ```

#### `pass`
- **Definition**: Placeholder statement (does nothing).
- **Syntax**:
  ```python
  if condition:
      pass
  ```

### 3. Loop Control Statement

#### Math and Random number functions
- **Math functions**: `math.sqrt()`, `math.sin()`, `math.cos()`, etc.
- **Random functions**: `random.random()`, `random.randint(a, b)`, etc.

### 4. User-Defined Functions

#### Creating custom functions
- **Definition**: Functions defined by the user.
- **Syntax**:
  ```python
  def function_name(parameters):
      # block of code
  ```

#### Function arguments and their types
- **Positional arguments**: Arguments passed in order.
- **Keyword arguments**: Arguments passed by name.
- **Default arguments**: Arguments with default values.
- **Variable-length arguments**: Using `*args` for tuples and `**kwargs` for dictionaries.

### 5. Strings

#### Formatting strings
- **Definition**: Using placeholders.
- **Syntax**:
  ```python
  "Hello, {}".format(name)
  f"Hello, {name}"
  ```

#### String comparison
- **Definition**: Comparing strings using `==`, `!=`, `<`, `>`, etc.

#### Slicing strings
- **Definition**: Extracting substrings.
- **Syntax**:
  ```python
  substring = string[start:end]
  ```

#### Splitting strings
- **Definition**: Splitting strings into lists.
- **Syntax**:
  ```python
  words = string.split(separator)
  ```

#### Stripping whitespace
- **Definition**: Removing leading and trailing whitespace.
- **Syntax**:
  ```python
  stripped_string = string.strip()
  ```

#### Negative indices
- **Definition**: Counting from the end.
- **Syntax**:
  ```python
  last_char = string[-1]
  ```

#### String functions
- **Examples**: `len()`, `upper()`, `lower()`, `find()`, `replace()`, etc.

### 6. Regular Expressions

#### Matching patterns using regex
- **Definition**: Finding patterns in strings.
- **Syntax**:
  ```python
  import re
  pattern = re.compile("regex_pattern")
  matches = pattern.finditer(text)
  ```

#### Search and replace operations
- **Definition**: Finding and replacing patterns in strings.
- **Syntax**:
  ```python
  new_string = re.sub("regex_pattern", "replacement", text)
  ```
 













### 3 Lists

#### Create
- **Definition**: Ordered, mutable collections of items.
- **Syntax**:
  ```python
  my_list = [1, 2, 3, 4, 5]
  ```

#### Access
- **Definition**: Accessing elements by index.
- **Syntax**:
  ```python
  element = my_list[0]  # First element
  ```

#### Slicing
- **Definition**: Extracting a subset of the list.
- **Syntax**:
  ```python
  sub_list = my_list[start:end]  # Elements from start to end-1
  ```

#### Negative Indices
- **Definition**: Counting from the end of the list.
- **Syntax**:
  ```python
  last_element = my_list[-1]  # Last element
  ```

#### List Methods
- **Common Methods**:
  - `append(item)`: Adds an item to the end of the list.
  - `insert(index, item)`: Inserts an item at a specified index.
  - `remove(item)`: Removes the first occurrence of an item.
  - `pop(index)`: Removes and returns the item at the specified index.
  - `sort()`: Sorts the list in ascending order.
  - `reverse()`: Reverses the order of the list.
  - `extend(iterable)`: Adds all items from an iterable to the end of the list.

#### List Comprehensions
- **Definition**: Concise way to create lists.
- **Syntax**:
  ```python
  squares = [x**2 for x in range(10)]
  ```

### Tuples

#### Create
- **Definition**: Ordered, immutable collections of items.
- **Syntax**:
  ```python
  my_tuple = (1, 2, 3, 4, 5)
  ```

#### Indexing and Slicing
- **Indexing**:
  ```python
  element = my_tuple[0]  # First element
  ```
- **Slicing**:
  ```python
  sub_tuple = my_tuple[start:end]  # Elements from start to end-1
  ```

#### Operations on Tuples
- **Concatenation**: `new_tuple = tuple1 + tuple2`
- **Repetition**: `new_tuple = tuple1 * 3`
- **Membership**: `item in tuple1`
- **Length**: `len(tuple1)`

### Dictionary

#### Create
- **Definition**: Unordered, mutable collections of key-value pairs.
- **Syntax**:
  ```python
  my_dict = {'key1': 'value1', 'key2': 'value2'}
  ```

#### Add and Replace Values
- **Add**:
  ```python
  my_dict['new_key'] = 'new_value'
  ```
- **Replace**:
  ```python
  my_dict['key1'] = 'updated_value'
  ```

#### Operations on Dictionaries
- **Common Operations**:
  - `keys()`: Returns a view of the dictionary's keys.
  - `values()`: Returns a view of the dictionary's values.
  - `items()`: Returns a view of the dictionary's key-value pairs.
  - `get(key, default)`: Returns the value for the specified key, or default if the key is not found.
  - `pop(key)`: Removes and returns the value for the specified key.
  - `update(dict)`: Updates the dictionary with key-value pairs from another dictionary or iterable.

### Sets

#### Create
- **Definition**: Unordered, mutable collections of unique items.
- **Syntax**:
  ```python
  my_set = {1, 2, 3, 4, 5}
  ```

#### Operations on Sets
- **Common Operations**:
  - `add(item)`: Adds an item to the set.
  - `remove(item)`: Removes an item from the set, raises KeyError if not found.
  - `discard(item)`: Removes an item if present, does nothing if not found.
  - `clear()`: Removes all items from the set.
  - `union(other_set)`: Returns a new set with elements from both sets.
  - `intersection(other_set)`: Returns a new set with elements common to both sets.
  - `difference(other_set)`: Returns a new set with elements in the set but not in other_set.
  - `symmetric_difference(other_set)`: Returns a new set with elements in either set but not in both.
  - `issubset(other_set)`: Checks if the set is a subset of other_set.
  - `issuperset(other_set)`: Checks if the set is a superset of other_set.

 



















### 4 Functions

#### Types of Functions

##### Built-in Functions
- **Definition**: Functions provided by Python.
- **Examples**:
  - `print()`: Prints to the console.
  - `len()`: Returns the length of an object.

##### User-Defined Functions
- **Definition**: Functions created by the programmer.
- **Syntax**:
  ```python
  def function_name(parameters):
      # block of code
  ```

#### Function Parameters and Arguments

##### Positional Arguments
- **Definition**: Passed based on their position in the function call.
- **Syntax**:
  ```python
  def add(a, b):
      return a + b

  result = add(2, 3)
  ```

##### Keyword Arguments
- **Definition**: Passed with explicit parameter names.
- **Syntax**:
  ```python
  def greet(name, message):
      print(f"Hello, {name}! {message}")

  greet(name="Alice", message="Good morning!")
  ```

##### Default Values
- **Definition**: Parameters can have default values.
- **Syntax**:
  ```python
  def greet(name, message="Hello"):
      print(f"{message}, {name}!")

  greet("Alice")  # Uses default message
  greet("Bob", "Good evening")  # Overrides default message
  ```

##### Arbitrary Arguments
- **Definition**: Functions can accept a variable number of arguments.
- **Syntax**:
  ```python
  def sum_all(*args):
      return sum(args)

  result = sum_all(1, 2, 3, 4)
  ```

#### Scope of Variables

##### Local Scope
- **Definition**: Variables defined within a function.
- **Example**:
  ```python
  def my_function():
      local_var = 10
      print(local_var)

  my_function()
  ```

##### Global Scope
- **Definition**: Variables defined outside functions.
- **Example**:
  ```python
  global_var = 20

  def my_function():
      print(global_var)

  my_function()
  ```

#### Recursion
- **Definition**: A function calling itself.
- **Example**:
  ```python
  def factorial(n):
      if n == 1:
          return 1
      else:
          return n * factorial(n - 1)

  result = factorial(5)
  ```

#### Lambda Functions
- **Definition**: Anonymous functions defined using the `lambda` keyword.
- **Syntax**:
  ```python
  add = lambda a, b: a + b
  result = add(2, 3)
  ```

### Files

#### Opening Files
- **Definition**: Use `open(filename, mode)` to open a file.
- **Modes**:
  - `'r'`: Read mode.
  - `'w'`: Write mode.
  - `'a'`: Append mode.
  - `'b'`: Binary mode.
- **Syntax**:
  ```python
  file = open('example.txt', 'r')
  ```

#### Reading from Files
- **Methods**:
  - `read()`: Reads the entire file.
  - `readline()`: Reads one line at a time.
  - `readlines()`: Reads all lines into a list.
- **Syntax**:
  ```python
  content = file.read()
  ```

#### Writing to Files
- **Methods**:
  - `write()`: Writes a string to the file.
  - `writelines()`: Writes a list of strings to the file.
- **Syntax**:
  ```python
  file.write('Hello, World!')
  ```

#### Appending to Files
- **Definition**: Use the append mode to add to the end of the file.
- **Syntax**:
  ```python
  file = open('example.txt', 'a')
  file.write('Appending text.')
  ```

#### Closing Files
- **Definition**: Always close files using `close()`.
- **Syntax**:
  ```python
  file.close()
  ```

#### Tell and Seek Methods

##### `tell()`
- **Definition**: Returns the current file position.
- **Syntax**:
  ```python
  position = file.tell()
  ```

##### `seek(offset, whence)`
- **Definition**: Moves the file pointer.
- **Parameters**:
  - `offset`: Number of positions to move.
  - `whence`: Reference point (0: beginning, 1: current, 2: end).
- **Syntax**:
  ```python
  file.seek(0, 0)  # Move to the beginning
  ```






















### 5. NumPy (Numerical Python)

#### Overview
- **Definition**: Fundamental package for high-performance scientific computing and data analysis in Python.
- **Key Features**:
  - **ndarray**: Fast and space-efficient multidimensional array for vectorized arithmetic operations and broadcasting.
  - **Standard Mathematical Functions**: Perform operations on entire arrays without explicit loops.
  - **File I/O Tools**: Read/write array data to disk and work with memory-mapped files.
  - **Additional Capabilities**: Linear algebra, random number generation, and Fourier transform.

### 2. Array Basics

#### Creating ND Arrays
- **Definition**: Use NumPy's `ndarray` to create arrays of various dimensions.
- **Syntax**:
  ```python
  import numpy as np

  array_1d = np.array([1, 2, 3])
  array_2d = np.array([[1, 2, 3], [4, 5, 6]])
  ```

#### Data Types for ND Arrays
- **Definition**: Specify data types (e.g., integers, floats) for array elements.
- **Syntax**:
  ```python
  array_int = np.array([1, 2, 3], dtype=int)
  array_float = np.array([1.0, 2.0, 3.0], dtype=float)
  ```

#### Arithmetic with NumPy Arrays
- **Definition**: Perform element-wise operations (addition, subtraction, etc.) on arrays.
- **Examples**:
  ```python
  array_a = np.array([1, 2, 3])
  array_b = np.array([4, 5, 6])

  sum_array = array_a + array_b
  diff_array = array_a - array_b
  product_array = array_a * array_b
  ```

#### Indexing and Slicing
- **Definition**: Access specific elements or slices of an array.
- **Examples**:
  ```python
  array = np.array([1, 2, 3, 4, 5])

  element = array[0]  # First element
  slice_array = array[1:4]  # Elements from index 1 to 3
  ```

#### Boolean Indexing
- **Definition**: Use Boolean conditions to filter array elements.
- **Examples**:
  ```python
  array = np.array([1, 2, 3, 4, 5])
  condition = array > 2
  filtered_array = array[condition]
  ```

#### Transposing Arrays
- **Definition**: Swap rows and columns.
- **Examples**:
  ```python
  array_2d = np.array([[1, 2, 3], [4, 5, 6]])
  transposed_array = array_2d.T
  ```

### 3. Universal Functions (ufuncs)
- **Definition**: Fast element-wise array functions.
- **Examples**:
  ```python
  array = np.array([1, 2, 3, 4, 5])

  sin_array = np.sin(array)
  exp_array = np.exp(array)
  sqrt_array = np.sqrt(array)
  ```

### 4. Mathematical and Statistical Methods
- **Descriptive Statistics**: Compute statistics like mean, median, etc.
- **Examples**:
  ```python
  array = np.array([1, 2, 3, 4, 5])

  mean_value = np.mean(array)
  median_value = np.median(array)
  ```

- **Sorting**:
  ```python
  sorted_array = np.sort(array)
  ```

- **Unique Values**:
  ```python
  unique_values = np.unique(array)
  ```

- **Set Operations**:
  ```python
  array_a = np.array([1, 2, 3])
  array_b = np.array([3, 4, 5])

  union = np.union1d(array_a, array_b)
  intersection = np.intersect1d(array_a, array_b)
  ```

### 5. Data Visualization
- **Overview**: While NumPy provides the computational foundation, consider using pandas for structured data analysis and visualization.
- **Example**: Use pandas with matplotlib for data visualization.
  ```python
  import pandas as pd
  import matplotlib.pyplot as plt

  # Example DataFrame
  data = {'A': [1, 2, 3, 4, 5], 'B': [5, 4, 3, 2, 1]}
  df = pd.DataFrame(data)

  # Plotting
  df.plot(kind='line')
  plt.show()
  ```

 


 
