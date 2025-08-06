#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char str[5];
	cout << "Enter characters at least 5:";
	cin >> str;
	for(int i=1;i<=5;i++)
	{
		str[i]=tolower(str);
	}
	cout << "The characters in lower case is :" << str << endl;
	return 0;
}

//coded by Tanzeela
  //Do again and again

