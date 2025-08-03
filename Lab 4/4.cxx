
#include <iostream>
#include <cstring>

int find_char(char* str, char ch) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            return 1; // Character is found
        }
    }
    return 0; // Character is not found
}

int main() {
    char str[100];
    char ch;
    
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    std::cout << "Enter a character to search for: ";
    std::cin >> ch;
    
    int result = find_char(str, ch);
    
    if (result) {
        std::cout << "The character '" << ch << "' is found in the string." << std::endl;
    } else {
        std::cout << "The character '" << ch << "' is not found in the string." << std::endl;
    }
    
    return 0;
}
