
#include <iostream>
#include <string>

int main() {
    std::string str1, str2, result;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    result = str1 + str2;

    std::cout << "The concatenated string is: " << result << std::endl;

    return 0;
}
;