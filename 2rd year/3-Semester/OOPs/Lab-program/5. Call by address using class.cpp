// Call by address using class

 
#include <iostream>

class Number {
public:
int value;
// Constructor to initialize the value
Number(int val) : value(val) {}
// Function to display the value
void display() {
std::cout << "Value: " << value << std::endl;
}

};
// Function that uses call by address
void updateNumber(Number *num, int newValue) {
num->value = newValue;
}
int main() {
// Creating an object of the Number class
Number myNumber(10);
std::cout << "Before update:" << std::endl;
myNumber.display(); // Display the initial value
// Calling the function with the address of the object
updateNumber(&myNumber, 20);
std::cout << "After update:" << std::endl;
myNumber.display(); // Display the updated value
return 0;
}


