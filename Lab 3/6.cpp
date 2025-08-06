
#include <iostream>
#include <string>
#include <map>

std::map<int, std::string> numToWord{
    {0, "zero"},
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"},
    {10, "ten"},
    {11, "eleven"},
    {12, "twelve"},
    {13, "thirteen"},
    {14, "fourteen"},
    {15, "fifteen"},
    {16, "sixteen"},
    {17, "seventeen"},
    {18, "eighteen"},
    {19, "nineteen"},
    {20, "twenty"},
    {30, "thirty"},
    {40, "forty"},
    {50, "fifty"},
    {60, "sixty"},
    {70, "seventy"},
    {80, "eighty"},
    {90, "ninety"},
    {100, "hundred"},
    {1000, "thousand"},
    {1000000, "million"}
};

std::string numberToWords(int num) {
    if (num < 20) {
        return numToWord[num];
    }
    else if (num < 100) {
        int tens = num / 10 * 10;
        int ones = num % 10;
        if (ones == 0) {
            return numToWord[tens];
        }
        else {
            return numToWord[tens] + "-" + numToWord[ones];
        }
    }
    else if (num < 1000) {
        int hundreds = num / 100;
        int remainder = num % 100;
        if (remainder == 0) {
            return numToWord[hundreds] + " " + numToWord[100];
        }
        else {
            return numToWord[hundreds] + " " + numToWord[100] + " " + numberToWords(remainder);
        }
    }
    else {
        for (auto p : numToWord) {
            int divisor = p.first;
            std::string divisorStr = p.second;
            if (divisor <= num && num < divisor * 1000) {
                int quotient = num / divisor;
                int remainder = num % divisor;
                if (remainder == 0) {
                    return numberToWords(quotient) + " " + divisorStr;
                }
                else {
                    return numberToWords(quotient) + " " + divisorStr + " " + numberToWords(remainder);
                }
            }
        }
    }
    return "";
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "In words: " << numberToWords(num) << std::endl;
    return 0;
}

