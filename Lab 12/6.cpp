#include<iostream>
using namespace std;
int cube(int *ptr)
{
	int num;
	num=*ptr * *ptr * *ptr;
	return num;
}
int main()
{
	int *a;
	cout << "Enter number :" ;
	cin >> *a;
	cout << "The cube of number is " << cube(a) << endl;
	return 0;
}

//coded by Tanzeela fatima

