#include<iostream>
using namespace std;
int main()
{
	int n[3];
	int *ptr[3];
	cout << "Enter 3 values :" << endl;
	for(int i=1;i<=3;i++)
	cin >> n[i];
	cout << "\nThe values are :" << endl;
	for(int i=1;i<=3;i++)
	{
	ptr[i]=&n[i];
	cout << *ptr[i]  << "\t";
	}
	return 0;
}

//coded by Tanzeela
  //Do again and again

