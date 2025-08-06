
#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str)
{
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input))
    {
        std::cout << "Palindrome" << std::endl;
    }
    else
    {
        std::cout << "Not a palindrome" << std::endl;
    }

    return 0;
}

