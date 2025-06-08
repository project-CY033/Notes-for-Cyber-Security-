// Q10. Convert array to pointer using class:


 
#include <iostream>
class ArrayConverter {
private:
int* pointer; // Pointer to hold the converted array
public:
// Constructor to convert the array to a pointer
ArrayConverter(int arr[], int size) {
pointer = arr;
}
// Function to display elements using the converted pointer
void displayElements(int size) {
std::cout << "Pointer elements: ";
for (int i = 0; i < size; ++i) {
std::cout << *(pointer + i) << " ";
}
std::cout << std::endl; } };
int main() {
// Declare and initialize an array
int myArray[] = {1, 2, 3, 4, 5};
int size = sizeof(myArray) / sizeof(myArray[0]);
// Display the elements of the array
std::cout << "Array elements: ";
for (int i = 0; i < size; ++i) {
std::cout << myArray[i] << " ";
}
std::cout << std::endl;
// Create an instance of the ArrayConverter class to convert the array to a pointer
ArrayConverter converter(myArray, size);
// Display the elements using the converted pointer
converter.displayElements(size);
return 0; }

