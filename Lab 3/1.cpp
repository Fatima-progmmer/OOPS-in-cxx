#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int temp;
	cout << "Enter Five numbers:" << endl;;
	for(int i=1;i<=5;i++)
	cin >> arr[i];
	for(int i=1;i<=5;i++)
	if(arr[i]<=arr[i++])
	temp=arr[i++];
	cout << "The greater number is " << temp << endl;
	return 0;
}

//coded by Tanzeela
  //Do again and again

