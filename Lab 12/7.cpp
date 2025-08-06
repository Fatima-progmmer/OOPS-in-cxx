#include<iostream>
using namespace std;
void display(int *ptr[])
{
	for(int i=1;i<=5;i++)
	cout << *ptr[i] << endl;
}
int main()
{
	int *arr[5];
	int a=1,b=2,c=3,d=4,e=5;
	*arr[1]=a;
	*arr[2]=b;
	*arr[3]=c;
	*arr[4]=d;
	*arr[5]=e;
	display(arr);
	return 0;
}

//coded by Tanzeela fatima

