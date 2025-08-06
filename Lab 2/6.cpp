#include <iostream>
using namespace std;
int main()
{
	int long num;
	cout << "Enter a  number=";
	cin >> num;
	int long rever = 0;
	while (num!= 0)
	{
		rever = rever * 10;
		rever = rever + num % 10;
		num = num/ 10;
	}
	 rever;
	cout << "After swapping the number :" << rever;
	return 0;
}
