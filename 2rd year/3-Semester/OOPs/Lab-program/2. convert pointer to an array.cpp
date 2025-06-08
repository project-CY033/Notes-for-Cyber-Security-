//  convert pointer to an array

#include <iostream>

class PointerToArrayConverter {
private:
    int* ptr;  // Pointer to an integer

public:
    // Constructor to initialize the pointer
    PointerToArrayConverter(int* p) : ptr(p) {}

    // Member function to convert the pointer to an array
    int* convertToArray(int size) {
        int* newArray = new int[size];
        for (int i = 0; i < size; ++i) {
            newArray[i] = ptr[i];
        }
        return newArray;
    }
};

int main() {
    const int size = 5;
    int originalArray[size] = {1, 2, 3, 4, 5};

    // Create an instance of the PointerToArrayConverter class
    PointerToArrayConverter converter(originalArray);

    // Convert the pointer to an array
    int* newArray = converter.convertToArray(size);

    // Display the original array
    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    // Display the converted array
    std::cout << "Converted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    // Don't forget to free the memory allocated for the new array
    delete[] newArray;

    return 0;
}


