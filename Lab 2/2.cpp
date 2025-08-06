#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char opr;
	cout << "Enter 1st number:" ;
	cin >> a;
	cout << "Enter 2nd number:";
	cin >> b;
	cout << "Enter your operator:";
	cin >> opr;
	switch(opr)
	{
		case '+':
			cout << a << "+" << b <<"=" <<a+b << endl;
		break;
		case '-':
			cout << a << "-" << b <<"=" <<a-b << endl;
		break;
		case '*':
			cout << a << "*" << b <<"=" <<a*b << endl;
		break;
		case '/':
			cout << a << "/" << b <<"=" <<a/b << endl;
		break;
		default:
			cout << "Invaalid choice." << endl;
	}
	return 0;
}

//coded by Tanzeela
  //Do again and again

