# Q why  java not support miltiple inhertance 



## Syntax
``` java

class A {             // Super class 


}

 
class B extends A{                 // sub class 
   

}


```


# Type 
read [types of inheritance](https://www.geeksforgeeks.org/inheritance-in-java/)

-  1. Single /simple inheritance
      
 
![image](https://github.com/user-attachments/assets/e69d751e-6b7e-418a-ada6-186fbd1c58f3)



    Super class 
        |
        |
       \|/
        V
    Sub class 


    
- 2. Multilevel Inheritance
 

  ![image](https://github.com/user-attachments/assets/7c0c5e6e-36fc-43e4-be16-5b0c28554e38)







 ```

 +------------------+
| Grandparent Class |
+-------------------+
        |
        |
       \|/
        V
+-----------------+
| Parent Class    |
+-----------------+
        |
        |
       \|/
        V
+-----------------+
| Child Class     |
+-----------------+

 ```



## 4. Hierarchical Inheritance



![image](https://github.com/user-attachments/assets/768e80d7-0a42-4611-b219-810444620bd4)



```
                          +-----------------+
                          |   Super Class   |
                          +-----------------+
                                  |
                                  | 
          +-------------------------------------------+
          |                 |                         |
          |                 |                         |
          |                 |                         |
          V                 V                         V
+-----------------+   +-----------------+      +-----------------+
| Sub Class 1      |  | Sub Class 2     |      | Sub Class 3     |
+-----------------+   +-----------------+      +-----------------+



```



## 5. Hybrid Inheritance



![image](https://github.com/user-attachments/assets/b779e7ff-6aa5-4b50-9036-579bf649695f)






```

    +-----------------+        +-----------------+
    |   Interface 1   |        |   Interface 2   |
    +-----------------+        +-----------------+
            |                       |
            |                       |
           \|/                     \|/
            V                       V
   +-----------------+       +-----------------+
   |   Interface 3   |       |   Interface 4   |
   +-----------------+       +-----------------+
            |                       |
            |                       |
           \|/                     \|/
            V                       V
   +-----------------+       +-----------------+
   |   Sub Class 1   |       |   Sub Class 2   |
   +-----------------+       +-----------------+
```



