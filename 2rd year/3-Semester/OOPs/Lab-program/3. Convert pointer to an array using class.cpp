//  Convert pointer to an array using class

#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;

    // Calling the function with references
    swap(x, y);

    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    return 0;
}


