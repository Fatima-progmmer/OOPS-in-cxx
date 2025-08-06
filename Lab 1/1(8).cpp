#include <iostream>

int main() {
    int numCalls;
    double totalBill = 0;
    
    std::cout << "Enter the number of calls: ";
    std::cin >> numCalls;
    if (numCalls <= 100)
	 {
        totalBill = 600;
    } else if (numCalls <= 150)
	 {
        totalBill = 600 + (numCalls - 100) * 0.6;
    } else if (numCalls <= 200) 
	{
        totalBill = 600 + 50 * 0.6 + (numCalls - 150) * 0.5;
    } else 
	{
        totalBill = 600 + 50 * 0.6 + 50 * 0.5 + (numCalls - 200) * 0.4;
    }
    std::cout << "Total monthly telephone bill: Rs. " << totalBill << std::endl;
    return 0;
}


