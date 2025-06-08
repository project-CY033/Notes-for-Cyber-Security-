# Java Inheritance

Inheritance is an important pillar of OOP (Object-Oriented Programming). It is the mechanism in Java by which one class is allowed to inherit the features (fields and methods) of another class. In Java, inheritance means creating new classes based on existing ones. A class that inherits from another class can reuse the methods and fields of that class. In addition, you can add new fields and methods to your current class as well.

## Table of Contents
- [Why Do We Need Java Inheritance?](#why-do-we-need-java-inheritance)
- [Important Terminologies Used in Java Inheritance](#important-terminologies-used-in-java-inheritance)
- [How to Use Inheritance in Java?](#how-to-use-inheritance-in-java)
- [Inheritance in Java Example](#inheritance-in-java-example)
- [Output](#output)
- [Example 2](#example-2)

## Why Do We Need Java Inheritance?

- **Code Reusability:** The code written in the Superclass is common to all subclasses. Child classes can directly use the parent class code.
- **Method Overriding:** [Method Overriding](https://www.geeksforgeeks.org/overriding-in-java) is achievable only through Inheritance. It is one of the ways by which Java achieves Run Time Polymorphism.
- **Abstraction:** The concept of abstract where we do not have to provide all details, is achieved through inheritance. [Abstraction](https://www.geeksforgeeks.org/abstraction-in-java-2) only shows the functionality to the user.

Explore a free Java Course to know more about Java Inheritance.

## Important Terminologies Used in Java Inheritance

- **Class:** A set of objects which shares common characteristics/behavior and common properties/attributes. Class is not a real-world entity. It is just a template or blueprint or prototype from which objects are created.
- **Super Class/Parent Class:** The class whose features are inherited is known as a superclass (or a base class or a parent class).
- **Sub Class/Child Class:** The class that inherits the other class is known as a subclass (or a derived class, extended class, or child class). The subclass can add its own fields and methods in addition to the superclass fields and methods.
- **Reusability:** Inheritance supports the concept of “reusability”, i.e., when we want to create a new class and there is already a class that includes some of the code that we want, we can derive our new class from the existing class. By doing this, we are reusing the fields and methods of the existing class.

## How to Use Inheritance in Java?

The `extends` keyword is used for inheritance in Java. Using the `extends` keyword indicates you are derived from an existing class. In other words, “extends” refers to increased functionality.

**Syntax:**

```java
class DerivedClass extends BaseClass  
{  
   //methods and fields  
}
```

## Inheritance in Java Example

Example: In the below example of inheritance, class `Bicycle` is a base class, class `MountainBike` is a derived class that extends the `Bicycle` class and class `Test` is a driver class to run the program.

```java
// Java program to illustrate the
// concept of inheritance

// base class
class Bicycle {
    // the Bicycle class has two fields
    public int gear;
    public int speed;

    // the Bicycle class has one constructor
    public Bicycle(int gear, int speed)
    {
        this.gear = gear;
        this.speed = speed;
    }

    // the Bicycle class has three methods
    public void applyBrake(int decrement)
    {
        speed -= decrement;
    }

    public void speedUp(int increment)
    {
        speed += increment;
    }

    // toString() method to print info of Bicycle
    public String toString()
    {
        return ("No of gears are " + gear + "\n"
                + "speed of bicycle is " + speed);
    }
}

// derived class
class MountainBike extends Bicycle {

    // the MountainBike subclass adds one more field
    public int seatHeight;

    // the MountainBike subclass has one constructor
    public MountainBike(int gear, int speed,
                        int startHeight)
    {
        // invoking base-class(Bicycle) constructor
        super(gear, speed);
        seatHeight = startHeight;
    }

    // the MountainBike subclass adds one more method
    public void setHeight(int newValue)
    {
        seatHeight = newValue;
    }

    // overriding toString() method
    // of Bicycle to print more info
    @Override public String toString()
    {
        return (super.toString() + "\nseat height is "
                + seatHeight);
    }
}

// driver class
public class Test {
    public static void main(String args[])
    {

        MountainBike mb = new MountainBike(3, 100, 25);
        System.out.println(mb.toString());
    }
}
```

## Output

```
No of gears are 3
speed of bicycle is 100
seat height is 25
```

In the above program, when an object of the `MountainBike` class is created, a copy of all methods and fields of the superclass acquires memory in this object. That is why by using the object of the subclass we can also access the members of a superclass.

Please note that during inheritance only the object of the subclass is created, not the superclass. For more, refer to [Java Object Creation of Inherited Class](https://www.geeksforgeeks.org/java-object-creation-of-inherited-class/).

 
 
