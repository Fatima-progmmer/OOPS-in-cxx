#include<iostream>
using namespace std;
int calculate(const char* str)
{
	const char* p=str;
	while(*p)
	{
		p++;
	}
	return p-str;
}

int main()
{
	char* string;
	cout << "Enter a string :" ;
	cin >> string;
	int length=calculate(string);
	cout << "The length of string is " << length << endl;
	return 0;
}

//coded by Tanzeela fatima

