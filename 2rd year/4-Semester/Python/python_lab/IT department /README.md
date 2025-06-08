# WAP to show  implementation of Variables and Literals, Comments,Single-line Comment,Multiline Comments




```py
# This is an example of a multiline comment
# created using multiple single-line commenced
# The code prints the text Hello World
print("Hello, World!")

a, b, c = 5, 3.2, 'Hello'

print (a)  # prints 5
print (b)  # prints 3.2
print (c)  # prints Hello

x = y =site1 = site2  = 'programiz.com'

print(x)  # prints programiz.com
print(y)  # prints programiz.com

```


## Output
```
Hello, World!
5
3.2
Hello
programiz.com
programiz.com
```





#  WAP to show  implementation of Type Conversion
- **1: Converting integer to float**
- **2: Addition of string and integer Using Explicit Conversion**
- ****





```py
  

i=int(input("Enter integer number  :"))

f=eval(input("Enter flot number  :"))
print("\n\nImplicit Type Conversion")
n=i+f
print("successfully Converting datatype : ",n)
print(type(n))




 
print(" \n\n\n\nExplicit Type Conversion") 
num_string = '12'
 
print("Data type of num_string before Type Casting:",type(num_string))

# explicit type conversion
num_string = int(num_string)

print("Data type of num_string after Type Casting:",type(num_string))

num_sum = i + num_string

print("Sum:",num_sum)
print("Data type of num_sum:",type(num_sum))


```

# Output
```
Enter integer number  :556
Enter flot number  :5.6


Implicit Type Conversion
successfully Converting datatype :  561.6
<class 'float'>
 



Explicit Type Conversion
Data type of num_string before Type Casting: <class 'str'>
Data type of num_string after Type Casting: <class 'int'>
Sum: 568
Data type of num_sum: <class 'int'>
```






#  WAP to show  implementation of Python Operators
- 1. Arithmetic Operators
- 2. Assignment Operators
- 3. Comparison Operators
- 4. Logical Operators
- 5. Bitwise Operators
- 6. Special Operators


```py
a = int(input("Enter first number \t "))
b = int(input("Enter Second number "))


print ('Sum: ', a + b)  
 
print ('Subtraction: ', a - b)   

 
print ('Multiplication: ', a * b)  

 
print ('Division: ', a / b) 

 
print ('Floor Division: ', a // b)

 
print ('Modulo: ', a % b)  

 
print ('Power: ', a ** b)


```

## output

```
Enter first number 	 7
Enter Second number 8
Sum:  15
Subtraction:  -1
Multiplication:  56
Division:  0.875
Floor Division:  0
Modulo:  7
Power:  5764801
````




#  WAP to show  implementation of  Assignment Operators
- Addition Assignment	
- Subtraction Assignment	
- Multiplication Assignment
- Division Assignment	
- Remainder Assignment
- Exponent Assignment

```py
 
a = int(input("assign first  value  \t "))
b = int(input("assign second  value "))



print("Assignment Operators")
print ( a )  
print (b)   

print("\nAddition Assignment && Subtraction Assignment ")

a +=1  # a = a + 1
b -=1
print( "Addition is :", a)
print ("Subtraction is :",b)


print("\nMultiplication Assignment")
a *= b  # a = a * b
print(a)
 
print("\nDivision Assignment ")

a  /=b # a =  a/b
print(a) 



print("\nRemainder Assignment ") 
a %=b
print (a)


print("\n Exponent Assignment ")
a **= b
print (a)
  

```

## Output

```
assign first  value  	 6
assign second  value 6
Assignment Operators
6
6

Addition Assignment && Subtraction Assignment 
Addition is : 7
Subtraction is : 5

Multiplication Assignment
35

Division Assignment 
7.0

Remainder Assignment 
2.0

 Exponent Assignment 
32.0
```




#  WAP to show  implementation of Comparison Operators

```py

a = 5

b = 2

# equal to operator
print('a == b =', a == b)

# not equal to operator
print('a != b =', a != b)

# greater than operator
print('a > b =', a > b)

# less than operator
print('a < b =', a < b)

# greater than or equal to operator
print('a >= b =', a >= b)

# less than or equal to operator
print('a <= b =', a <= b)

```

# output 
```
a == b = False
a != b = True
a > b = True
a < b = False
a >= b = True
a <= b = False
```



#  WAP to show  implementation of Logical Operators
```py

print("\n Logical Operators")
a = 5
b = 6

print((a > 2) and (b >= 6))   

print((a > 2) or (b >= 6)) 

print("\n Special operators :")
x1 = 5
y1 = 5
x2 = 'Hello'
y2 = 'Hello'
x3 = [1,2,3]
y3 = [1,2,3]
print(x1 is not y1)   
print(x2 is y2)   
print(x3 is y3)   

print("\nMembership operators :")
message = 'Hello world'
dict1 = {1:'a', 2:'b'}
print('H' in message)   
print('hello' not in message)  
print(1 in dict1)   
print('a' in dict1)  

```

## output
```
Logical Operators
True
True

 Special operators :
False
True
False

Membership operators :
True
True
True
False
```



#  WAP to show  implementation of Conditional Statements
- **if...else Statement**
- **if…elif…else Statement**
- **Nested if Statements**

```py
a = int(input("Enter first  value "))
b = int(input("Enter Second  value "))

print("\n if...else Statement")
if a >b:
    print(a,"is greater then ",b)
else:
    print(b,"is greater then",a)



print("\nif…elif…else Statement")
if a  >= 0  :
    print(a, " is  Positive number ")
   
    
elif a==0  :
    print(a,"is neither negitive and positive ")
     
    
else:
    print(a, "is negitive numbr ")
 
 
 
print("\nNested if Statement")
number = 5

# outer if statement
if number >= 0:
    # inner if statement
    if number == 0:
      print('Number is 0')
    
    # inner else statement
    else:
        print('Number is positive')

# outer else statement
else:
    print('Number is negative') 
    
```

# output
```
Enter first  value 5
Enter Second  value 6

 if...else Statement
6 is greater then 5

if…elif…else Statement
5  is  Positive number 

Nested if Statement
Number is positive
```



# WAP to show  implementation of  Loop 
- **1 for loop**
```py
print("\n for loop ")

languages = ['Swift', 'Python', 'Go']

 
for lang in languages:
    print(lang)
    
    
language = 'Python'
 
for x in language:
    print(x)
    

```
# output
```
Swift
Python
Go
P
y
t
h
o
n
0
1
2
3
```


- **2 while loop**

```py
password = "shivam"
p = input("Enter passwor for login:\t")
while password != p:
    print("worng password retry!!")
    p=input("Please Enetr Again ")
else:
    print("correct paswsword ")

```
## output
```
Enter passwor for login:	1234
worng password retry!!
Please Enetr Again shivam
correct paswsword 
```

 

- **3 break Statement with for Loop**
```py
for i in range(5):
    if i == 3:
        break
    print(i)
print("break work successfully .......")
    
for i in range(5):
    if i == 3:
        continue
    print(i)
print("continue work successfully .......")
    


```
## output
```
0
1
2
break work successfully .......
0
1
2
4
continue work successfully .......
```

# WAP to show  implementation of Python Data types
 
```py
x = 10
print(f"Integer: {x}, Type: {type(x)}")

# Float
y = 10.5
print(f"Float: {y}, Type: {type(y)}")

# String
name = "Alice"
print(f"String: {name}, Type: {type(name)}")

# List
fruits = ["apple", "banana", "cherry"]
print(f"List: {fruits}, Type: {type(fruits)}")

# Dictionary
person = {"name": "Bob", "age": 25}
print(f"Dictionary: {person}, Type: {type(person)}")

# Boolean
is_active = True
print(f"Boolean: {is_active}, Type: {type(is_active)}")

```

## output
```
Integer: 10, Type: <class 'int'>
Float: 10.5, Type: <class 'float'>
String: Alice, Type: <class 'str'>
List: ['apple', 'banana', 'cherry'], Type: <class 'list'>
Dictionary: {'name': 'Bob', 'age': 25}, Type: <class 'dict'>
Boolean: True, Type: <class 'bool'>
```


# WAP to show  implementation of  Functions

```py
def greet(name):
    return f"Hello, {name}!"

print(greet("Alice"))

# Function with default argument
def add(a, b=5):
    return a + b

print(add(10))
print(add(10, 20))

```

## output

```
Hello, Alice!
15
30
```

# WAP to show  implementation of Files opration
```py
 
with open("example.txt", "w") as file:
    file.write("Hello, world!\n")

 
with open("example.txt", "r") as file:
    content = file.read()
    print("Content after writing:")
    print(content)

 
with open("example.txt", "a") as file:
    file.write("This is an additional line.\n")

 
with open("example.txt", "r") as file:
    content = file.read()
    print("Content after appending:")
    print(content)

```

##  output
```
Content after writing:
Hello, world!

Content after appending:
Hello, world!
This is an additional line.

````

# WAP to show  implementation of Python Exception Handling
```py
a=10
b=0

try:
    c=a/b
    print(c)
except:
    print("Error: Can't divide by zero. ")

```

##  output
```
ERROR!
Error: Can't divide by zero. 
````

# WAP to show  implementation of  Object & Class
```py
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def introduce(self):
        return f"Hi, I'm {self.name} and I'm {self.age} years old."

 
alice = Person("Alice", 30)

 
print(alice.introduce())  
```

##  output
```
Hi, I'm Alice and I'm 30 years old.
````

 
# WAP to show  implementation of Date and Time
```py
import datetime

 
current_datetime = datetime.datetime.now()
print("Current date and time:", current_datetime)

 
year = current_datetime.year
month = current_datetime.month
day = current_datetime.day
hour = current_datetime.hour
minute = current_datetime.minute
second = current_datetime.second

print(f"Year: {year}, Month: {month}, Day: {day}")
print(f"Time: {hour}:{minute}:{second}")

 
formatted_date = current_datetime.strftime("%Y-%m-%d %H:%M:%S")
print("Formatted date:", formatted_date)

```

##  output
```
Current date and time: 2024-08-05 11:54:27.628542
Year: 2024, Month: 8, Day: 5
Time: 11:54:27
Formatted date: 2024-08-05 11:54:27
````


