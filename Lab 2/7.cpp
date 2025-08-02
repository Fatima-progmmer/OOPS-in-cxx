#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char oper;
	cout << "Enter first number :";
	cin >> a;
	cout << "operation : ";
	cin >> oper ;
	cout << "Enter second number : ";
	cin >> b;
	switch (oper)
	{
		case '+':
		cout << a << " + " << b << "=" << a+b << endl;
		break;
		case '-':
		cout << a << " - " << b << "=" << a-b << endl;
		break;
		case '*':
		cout << a << " * " << b << "=" << a*b << endl;
		break;
		case '/':
		cout << a << " / " << b << "=" << a/b << endl;
		break;
	}
	return 0;
}
