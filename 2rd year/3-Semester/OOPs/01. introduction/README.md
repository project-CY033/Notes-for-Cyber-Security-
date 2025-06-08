# Table of Contents

1. [Object Oriented Programming in C++](#object-oriented-programming-in-c)
2. [Key Concepts of OOP](#key-concepts-of-oop)
   - [Class](#class)
   - [Objects](#objects)
   - [Encapsulation](#encapsulation)
   - [Abstraction](#abstraction)
   - [Polymorphism](#polymorphism)
   - [Inheritance](#inheritance)
   - [Dynamic Binding](#dynamic-binding)
   - [Message Passing](#message-passing)
3. [Characteristics of an Object-Oriented Programming Language](#characteristics-of-an-object-oriented-programming-language)
4. [OOPS Concepts in C++](#oops-concepts-in-c)
5. [Differences between Procedural and Object-Oriented Programming](#differences-between-procedural-and-object-oriented-programming)
   - [Procedural Programming](#procedural-programming)
   - [Object-Oriented Programming](#object-oriented-programming)
   - [Comparison](#comparison)
6. [Functional Programming vs Object-Oriented Programming](#functional-programming-vs-object-oriented-programming)
   - [Functional Programming](#functional-programming)
   - [Object-Oriented Programming](#object-oriented-programming-1)
   - [Comparison](#comparison-1)
7. [Namespace in C++](#namespace-in-c)
   - [Introduction](#introduction)
   - [Defining a Namespace](#defining-a-namespace)
   - [Advantages of Namespaces](#advantages-of-namespaces)
   - [Example of Namespace Usage](#example-of-namespace-usage)
   - [Nested Namespaces](#nested-namespaces)
   - [Namespace Scope](#namespace-scope)
8. [Conclusion](#conclusion)
9. [References](#references)


 
# Object Oriented Programming in C++                                [Move Up](#table-of-contents)

## Overview

Object-oriented programming (OOP) uses objects in programming. The main aim of OOP is to implement real-world entities like inheritance, hiding, polymorphism, etc., in programming. It aims to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

 

## Key Concepts of OOP                                              [Move Up](#table-of-contents)

OOP is based on several fundamental concepts, which act as its building blocks:

1. **Class**: A blueprint for creating objects (a particular data structure), providing initial values for state (member variables or fields), and implementations of behavior (member functions or methods).

    ### Class
    The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

    For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

    ```cpp
    class Car {
        int speedLimit;
        int mileage;
    public:
        void applyBrakes() {}
        void increaseSpeed() {}
    };
    ```

2. **Objects**: Instances of classes. Objects hold data and can perform functions defined by their class.


 
 ### Object                                                             [Move Up](#table-of-contents)
    An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e., an object is created) memory is allocated.

    ```cpp
    // C++ Program to show the syntax/working of Objects as a part of Object Oriented Programming
    #include <iostream>
    using namespace std;

    class Person {
        char name[20];
        int id;
    public:
        void getDetails() {}
    };

    int main() {
        Person p1; // p1 is an object
        return 0;
    }
    ```

    Objects take up space in memory and have an associated address like a record in Pascal or structure or union. When a program is executed, the objects interact by sending messages to one another. Each object contains data and code to manipulate the data.

    [Copy Code](# "class Person { char name[20]; int id; public: void getDetails() {} }; int main() { Person p1; return 0; }")

    [Run Code](https://onlinegdb.com/fork/rJmSx4_FH "class Person { char name[20]; int id; public: void getDetails() {} }; int main() { Person p1; return 0; }")

3. **Encapsulation**: The bundling of data and the methods that operate on that data within one unit, e.g., a class in C++. It restricts direct access to some of the object's components, which can prevent the accidental modification of data.

4. **Abstraction**: The concept of hiding the complex reality while exposing only the necessary parts. It helps in reducing programming complexity and effort.

5. **Polymorphism**: The ability of different objects to respond to the same function call in different ways. It allows one interface to be used for a general class of actions.

6. **Inheritance**: A mechanism by which one class can inherit the properties and methods of another class. It provides a way to create a new class using the properties and methods of an existing class.

7. **Dynamic Binding**: The code to be executed in response to a function call is determined at runtime.

8. **Message Passing**: Objects communicate with one another by sending and receiving information to each other. Messages (function calls) are sent to invoke behavior.


 

## Characteristics of an Object-Oriented Programming Language               [Move Up](#table-of-contents)

OOP languages share several common characteristics, including but not limited to the above key concepts. They facilitate a modular approach to programming and make it easier to manage and modify complex systems.

## OOPS Concepts in C++

In C++, OOP is a paradigm that provides a clear modular structure for programs, making it good for defining abstract data types where implementation details are hidden. It emphasizes the following:

- **Class and Object creation**
- **Data Encapsulation and Abstraction**
- **Inheritance among classes**
- **Polymorphism through function overloading and operator overloading**

These concepts help in creating reusable code and reducing redundancy.

## Visual Representation
![OOPs-Concepts](https://github.com/user-attachments/assets/8e54733e-f1a9-47a8-9ac8-d373b44a3d41)







 

## Differences between Procedural and Object-Oriented Programming



### Procedural Programming                                              [Move Up](#table-of-contents)

Procedural Programming can be defined as a programming model which is derived from structured programming, based upon the concept of calling procedures. Procedures, also known as routines, subroutines, or functions, simply consist of a series of computational steps to be carried out. During a program’s execution, any given procedure might be called at any point, including by other procedures or itself.

**Languages used in Procedural Programming**: FORTRAN, ALGOL, COBOL, BASIC, Pascal, and C.

### Object-Oriented Programming

Object-oriented programming can be defined as a programming model based upon the concept of objects. Objects contain data in the form of attributes and code in the form of methods. In object-oriented programming, computer programs are designed using the concept of objects that interact with the real world. Object-oriented programming languages are various but the most popular ones are class-based, meaning that objects are instances of classes, which also determine their types.

**Languages used in Object-Oriented Programming**: Java, C++, C#, Python, PHP, JavaScript, Ruby, Perl, Objective-C, Dart, Swift, Scala.

### Comparison                                                            [Move Up](#table-of-contents)

| **Procedural Oriented Programming**                                    | **Object-Oriented Programming**                                          |
|------------------------------------------------------------------------|--------------------------------------------------------------------------|
| In procedural programming, the program is divided into small parts     | In object-oriented programming, the program is divided into small parts  |
| called functions.                                                      | called objects.                                                          |
| Procedural programming follows a top-down approach.                    | Object-oriented programming follows a bottom-up approach.                |
| There is no access specifier in procedural programming.                | Object-oriented programming has access specifiers like private, public,  |
|                                                                        | protected, etc.                                                          |
| Adding new data and functions is not easy.                             | Adding new data and functions is easy.                                   |
| Procedural programming does not have any proper way of hiding data so  | Object-oriented programming provides data hiding so it is more secure.   |
| it is less secure.                                                     |                                                                          |
| In procedural programming, overloading is not possible.                | Overloading is possible in object-oriented programming.                  |
| In procedural programming, there is no concept of data hiding and      | In object-oriented programming, the concept of data hiding and           |
| inheritance.                                                           | inheritance is used.                                                     |
| In procedural programming, the function is more important than the     | In object-oriented programming, data is more important than function.    |
| data.                                                                  |                                                                          |
| Procedural programming is based on the unreal world.                   | Object-oriented programming is based on the real world.                  |
| Procedural programming is used for designing medium-sized programs.    | Object-oriented programming is used for designing large and complex      |
|                                                                        | programs.                                                                |
| Procedural programming uses the concept of procedure abstraction.      | Object-oriented programming uses the concept of data abstraction.        |
| Code reusability absent in procedural programming.                     | Code reusability present in object-oriented programming.                 |
| **Examples**: C, FORTRAN, Pascal, Basic, etc.                          | **Examples**: C++, Java, Python, C#, etc.                                |


 

## Functional Programming vs Object-Oriented Programming                    [Move Up](#table-of-contents)

### Functional Programming

In functional programming, we have to build programs using functions. An example of functional programming is the C language.

### Object-Oriented Programming

Object-oriented programming is built by using classes and objects. In this, we have concepts of encapsulation, inheritance, polymorphism, and data abstraction.

### Comparison                                                            [Move Up](#table-of-contents)

| **Functional Programming**                                             | **Object-Oriented Programming**                                          |
|------------------------------------------------------------------------|--------------------------------------------------------------------------|
| Emphasizes the use of functions where each function performs a specific task | Based on the object-oriented concept where instances of objects are created |
| Fundamental elements used are variables and functions.                 | Fundamental elements used are objects and methods                        |
| Data in the functions are immutable (cannot be changed after creation) | Data used here are mutable data                                          |
| Importance is given to functions                                       | Importance is given to data rather than procedures                       |
| Follows a declarative programming model                                | Follows an imperative programming model                                  |
| Uses recursion for iteration                                           | Uses loops for iteration                                                 |
| Supports parallel object-oriented programming                          | Does not support parallel programming                                    |
| Statements do not need to follow a particular order while execution    | Statements need to follow an order i.e., bottom-up approach while execution |
| No access specifier                                                    | Has three access specifiers namely, Public, Private, and Protected       |
| Adding new data and functions is not easy                              | Provides an easy way to add new data and functions                       |
| No data hiding is possible. Hence, security is not possible            | Provides data hiding. Hence, secured programs are possible               |

---

## References - Read more About Difference                                   [Move Up](#table-of-contents)
---
   -[OOP -Differences between Procedural and Object Oriented Programming](https://www.geeksforgeeks.org/differences-between-procedural-and-object-oriented-programming/)

-[Detailed OOP in C++](https://www.javatpoint.com/cpp-oops-concepts)

---









 
 
## Object-Oriented Programming (OOP)                                      [Move Up](#table-of-contents)

OOP stands for Object-Oriented Programming. It breaks a program into objects, which encapsulate data and functions. Key concepts of OOP include Classes, Objects, Polymorphism, Abstraction, Encapsulation, and Inheritance. Some popular OOP languages include Objective C, Perl, Java, Python, Modula, Ada, Simula, C++, Smalltalk, and Common Lisp.

### Advantages of OOP
- **Modular Development**: Programs can be built from standard modules, saving development time and increasing productivity.
- **Manageable Problems**: Programs can be broken into smaller, manageable pieces, making it easier to solve problems one object at a time.
- **Enhanced Productivity**: OOP can lead to greater programmer productivity and better software quality.
- **Scalability**: OOP systems can be upgraded from small to large systems seamlessly.
- **Object Coexistence**: Multiple instances of objects can coexist without interference.
- **Task Partitioning**: Work on a project can be partitioned based on objects, improving organization.
- **Data Hiding**: Data hiding principles help in building secure programs.
- **Code Reusability**: Inheritance helps in reusing and extending existing code, reducing redundancy.
- **Simplified Communication**: Message passing techniques simplify interface descriptions and communication between objects.
- **Detailed Modeling**: Data-centered design allows capturing more details of the model in an implementable form.

 


### Disadvantages of OOP                                                   [Move Up](#table-of-contents)
- **Increased Size**: OOP programs can be larger than procedural ones, leading to slower execution times.
- **Limited Applicability**: OOP is not suitable for all types of problems and cannot be universally applied.
- **Complex Design**: Effective use of OOP requires strong design and planning skills.
- **Learning Curve**: OOP may be challenging to grasp for some, requiring a shift in thought process.
- **Object Overhead**: Everything is treated as an object, necessitating careful consideration in its application.


 


## Application of OOP in C++                                             [Move Up](#table-of-contents)

### Real-Time System Design
OOP simplifies handling complexities inherent in real-time systems.

### Hypertext and Hypermedia
OOP helps in the framework for hypertext and hypermedia, which is essential for web development.

### AI Expert Systems
OOP aids in developing AI expert systems that tackle complex problems beyond human capability.

### Office Automation Systems
OOP facilitates the development of systems for information sharing and communication within organizations.

### Neural Networking and Parallel Programming
OOP assists in approximating and predicting complex systems through neural networks.

### Simulation and Modeling Systems
OOP provides an appropriate approach to model and simulate complex systems with varying specifications.

### Object-Oriented Databases
OOP maintains a direct correspondence between real-world objects and database objects, preserving their identity and integrity.

### Client-Server Systems
OOP supports creating object-oriented client-server applications.

### CIM/CAD/CAM Systems
OOP can be used in manufacturing and design applications, such as blueprint and flowchart generation.


 
## Namespace in C++                                                         [Move Up](#table-of-contents)

### Introduction
Namespaces in C++ provide a way to group identifiers such as variables, methods, and classes into a logical scope. They help avoid naming conflicts, especially when combining multiple libraries.


#### Defining a Namespace
```cpp
namespace namespace_name {
    // code declarations
    int a;
    void method();
    class MyClass {};
}


```

 


## Namespace in C++ | Set 1 (Introduction)                                [Move Up](#table-of-contents)

### What is a Namespace?

In C++, a namespace provides a space to define or declare identifiers, such as variables, methods, and classes. Essentially, a namespace creates a scope within which these identifiers are defined. This helps in organizing code and avoiding naming conflicts.
 
### Why Use Namespaces?                                                     [Move Up](#table-of-contents)

Namespaces are crucial in avoiding name collisions, especially when working with large codebases or integrating multiple libraries. For example, you might be writing code with a function named `xyz()`, and another library might also define a function with the same name. Without namespaces, the compiler would have no way of distinguishing between these two functions.

### How Namespaces Help                                                      [Move Up](#table-of-contents)

A namespace allows you to encapsulate identifiers, ensuring that similar names used in different contexts do not interfere with each other. This additional layer of information helps differentiate between functions, classes, variables, and other identifiers with the same name but residing in different namespaces.

### Example

Consider the following scenario:

```cpp
// Code in your project
namespace MyProject {
    void xyz() {
        // Implementation of xyz in MyProject
    }
}

// Code from an external library
namespace ExternalLib {
    void xyz() {
        // Implementation of xyz in ExternalLib
    }
}

```


## Defining a Namespace in C++                                  [Move Up](#table-of-contents)

### How to Define a Namespace

In C++, a namespace is defined using the `namespace` keyword followed by the namespace name. The namespace encapsulates code declarations such as variables, methods, and classes. The syntax is as follows:

```cpp
namespace namespace_name 
{
    // Variable declaration
    int a;

    // Method declaration
    void add();

    // Class definition
    class Student {
        // Class members
    };
}
```

 

### Advantages of Namespaces                                             [Move Up](#table-of-contents)

Namespaces are crucial for managing the complexity of large codebases. They provide the following benefits:

- **Avoid Name Collisions:** When multiple libraries or parts of a program use the same name for different functions, variables, or classes, namespaces help to avoid conflicts. For example, if you have a function named `xyz()` in your code and another library also has a function named `xyz()`, namespaces allow you to specify which version of `xyz()` you are referring to.
  
- **Organize Code:** Namespaces help in grouping related code together, making the codebase more organized and manageable.

### Example of Namespace Usage                                         [Move Up](#table-of-contents)
 
Consider a scenario where you are using a library that has a function called `xyz()`, and your own code also has a function named `xyz()`. Without namespaces, the compiler would not be able to distinguish between the two functions. Here’s how namespaces can resolve this issue:

```cpp
#include <iostream>

namespace Library {
    void xyz() {
        std::cout << "Library xyz()" << std::endl;
    }
}

namespace MyCode {
    void xyz() {
        std::cout << "MyCode xyz()" << std::endl;
    }
}

int main() {
    Library::xyz();  // Calls the xyz function in the Library namespace
    MyCode::xyz();   // Calls the xyz function in the MyCode namespace
    return 0;
}
```



 

## Nested Namespaces                                                [Move Up](#table-of-contents)

Namespaces can be nested, which means you can define one namespace inside another. This allows for a more granular organization of code. The syntax for nested namespaces is as follows:

### Syntax

```cpp
namespace namespace_name1 {
    // Code declarations

    namespace namespace_name2 {
        // Code declarations
    }
}
```

You can access members of nested namespace by using resolution operators as follows:
// to access members of namespace_name2
using namespace namespace_name1::namespace_name2;
// to access members of namespace_name1
using namespace namespace_name1;
 

[Move Up](#table-of-contents)

# In the above statements if you are using namespace_name1, then it will make elements of namespace_name2 available in the scope as follows:

```cpp
#include <iostream>
using namespace std;

// first name space
namespace first_space
{
void func()
{
	cout << "Inside first_space" << endl;
}
// second name space
namespace second_space
{
	void func()
	{
		cout << "Inside second_space" << endl;
	}
}
}
using namespace first_space::second_space;
int main ()
{
	// This calls function from second name space.
	func();

	return 0;
}
```

Output
``` cpp
Inside second_space
```
# Let us see how namespace scope the entities including variable and functions:  
                                                                 [Move Up](#table-of-contents)
```cpp 

#include <iostream>
using namespace std;
// first name space
namespace first_space
{
void func()
{
	cout << "Inside first_space" << endl;
}
}
// second name space
namespace second_space
{
void func()
{
	cout << "Inside second_space" << endl;
}
}

int main ()
{
	// Calls function from first name space.
	first_space :: func();
	// Calls function from second name space.
	second_space :: func(); 
	return 0;
}

```

Output
```cpp
Inside first_space
Inside second_space
```

 
# Consider the following C++ program:                                       [Move Up](#table-of-contents)
```cpp
// A program to demonstrate need of namespace
int main()
{
	int value;
	value = 0;
	double value; // Error here
	value = 0.0;
}
```

Output :
```cpp
Compiler Error:
'value' has a previous declaration as 'int value'
```





In each scope, a name can only represent one entity. So, there cannot be two variables with the same name in the same scope. Using namespaces, we can create two variables or member functions having the same name. 


```cpp
// Here we can see that more than one variables
// are being used without reporting any error.
// That is because they are declared in the
// different namespaces and scopes.
#include <iostream>
using namespace std;

// Variable created inside namespace
namespace first {
int val = 500;
}

// Global variable
int val = 100;

int main()
{
	// Local variable
	int val = 200;

	// These variables can be accessed from
	// outside the namespace using the scope
	// operator ::
	cout << first::val << '\n';

	return 0;
}
```



Output
```
500
```

- Definition and Creation: Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names. Namespaces provide the space where we can define or declare identifiers i.e. names of variables, methods, classes, etc.

- A namespace is a feature added in C++ and is not present in C.
- A namespace is a declarative region that provides a scope to the identifiers (names of functions, variables or other user-defined data types) inside it.
- Multiple namespace blocks with the same name are allowed. All declarations within those blocks are declared in the named scope.
- A namespace definition begins with the keyword namespace followed by the namespace name as follows:

```
namespace namespace_name 
{
   int x, y; // code declarations where 
             // x and y are declared in 
             // namespace_name's scope
}
```




-Namespace declarations appear only at global scope.
-Namespace declarations can be nested within another namespace.
-Namespace declarations don’t have access specifiers (Public or Private).
-No need to give a semicolon after the closing brace of the definition of namespace.
-We can split the definition of namespace over several units.


 

 
# Defining a Namespace:                                                     [Move Up](#table-of-contents)
A namespace definition begins with the keyword namespace followed by the namespace name as follows:
```
namespace namespace_name{
	// code declarations i.e. variable (int a;)
	method (void add();)
	classes ( class student{};)
}
```



It is to be noted that there is no semicolon (;) after the closing brace.
To call the namespace-enabled version of either a function or a variable, prepend the namespace name as follows:

namespace_name: :code;  // code could be a variable, function or class.


```cpp
// Let us see how namespace scope the entities including variable and functions:

#include <iostream>
using namespace std;

// first name space
namespace first_space
{
void func()
{
	cout << "Inside first_space" << endl;
}
}

// second name space
namespace second_space
{
void func()
{
	cout << "Inside second_space" << endl;
}
}

int main ()
{
	// Calls function from first name space.
first_space::func();
	// Calls function from second name space.
second_space::func(); 
return 0;
}

// If we compile and run above code, this would produce the following result:
// Inside first_space
// Inside second_space
```



Output
```cpp
Inside first_space
Inside second_space
```


# The using directive:                                                      [Move Up](#table-of-contents)
You can avoid prepending of namespaces with the using namespace directive. This directive tells the compiler that the subsequent code is making use of names in the specified namespace. The namespace is thus implied for the following 
code:
```cpp
#include <iostream>
using namespace std;

// first name space
namespace first_space
{
void func()
{
	cout << "Inside first_space" << endl;
}
}

// second name space
namespace second_space
{
void func()
{
	cout << "Inside second_space" << endl;
}
}

using namespace first_space;

int main ()
{
	// This calls function from first name space.
func();
return 0;
}

// If we compile and run above code, this would produce the following result:
// Inside first_space
```


Output
```
Inside first_space
```


 


read more                                                                    [Move Up](#table-of-contents)
[namespace](https://www.geeksforgeeks.org/namespace-in-c/)







 

## Conclusion                                                             [Move Up](#table-of-contents)

OOP in C++ facilitates the creation of programs that are more modular, easier to maintain, and more intuitive to understand. By mastering these concepts, developers can build robust and scalable software applications.

---

 

## References                                                               [Move Up](#table-of-contents)
---  
 -[OOP Concepts](https://www.geeksforgeeks.org/namespace-in-c/) 
 
 -[Detailed OOP in C++](https://www.javatpoint.com/cpp-oops-concepts)

---

Feel free to contribute to this repository by adding more examples or improving the explanations of the OOP concepts.
