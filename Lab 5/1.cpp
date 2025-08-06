#include <iostream>
using namespace std;
int main()
{
	int a;
	int tool[5];
	cout << "Enter five values ;" << endl;
	for(int y=1;y<=5;y++)
	cin >> tool[y];
	for(int y=1;y<=5;y++)
	{
		if(tool[y]>a)
		a=tool[y];
	}
	cout << " The greater number is " << a ;
	return 0;
}
