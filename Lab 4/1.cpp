#include<iostream>
using namespace std;
void larger()
{
	int a,b;
	cout << "Enter first number :";
	cin >> a;
	cout << "Enter second number :" ;
	cin >> b;
	if(a<b)
	cout << b << " is greater number.";
	else
	cout << a << " is greater number.";
}
int main()
{
	larger();
	return 0;
}
