#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("hello.txt");
	ofstream text("hello.txt" ,ios::app);
	int n[5];
	cout << "Enter five values :" << endl;
	for(int i=0;i<5;i++)
	cin >> n[i];
	cout << "The valuess you entered " << endl;
	for(int i=0;i<5;i++)
	{
	cout << n[i] << "\t" ;
	text << n[i] << "\t";
}
text << endl;
	return 0;
}

//coded by Tanzeela fatima

