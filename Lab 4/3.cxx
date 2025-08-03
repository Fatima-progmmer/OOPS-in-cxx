
#include <iostream>

void swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    
    return 0;
}
