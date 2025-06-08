//  call by refrence 

 #include <iostream>
class NumberManipulator {
private:
int value;
public:
// Constructor to initialize the value
NumberManipulator(int val) : value(val) {}
// Function to modify the value using call by reference
void modifyValue(int& newVal) {
value = newVal;
newVal *= 2; // Doubling the value passed by reference
}
// Function to display the current value
void displayValue() const {
std::cout << "Current value: " << value << std::endl;
}
};
int main() {
// Create an instance of the NumberManipulator class
NumberManipulator manipulator(10);
// Display the initial value

manipulator.displayValue();
// Call the modifyValue function with call by reference
int newValue = 5;
manipulator.modifyValue(newValue);
// Display the modified value and the updated newValue
manipulator.displayValue();
std::cout << "Updated newValue: " << newValue << std::endl;
return 0;
}


