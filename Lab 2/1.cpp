#include <iostream>
using namespace std;
int main ()
{
    int num;
	cout <<"Enter a number :";
	cin >> num ;
	for(int i=0;i<=num;i++)
	{
		if(num%i==0)
		cout << i << " ";
	}
	return 0;
}
