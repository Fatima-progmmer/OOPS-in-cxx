#include<iostream>
using namespace std;
int sum(int* a,int* b)
{
	int c=*a+*b;
	return c;
}
int sub(int* a,int* b)
{
	int c=*a-*b;
	return c;
}
int main()
{
	int *x,*y;
	cout << "Enter x:";
	cin >> *x;
	cout << "Enter y:";
	cin >> *y;
	cout << "The sum is " << sum(x,y) << endl;
	cout << "The sub is " << sub(*x,*y);
	return 0;
}

//coded by Tanzeela fatima

