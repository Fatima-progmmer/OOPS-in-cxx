#include<iostream>
using namespace std;
int main()
{
	int m;
	cout << "Enter your marks :";
	cin >> m;
	if(m>=90)
	cout << "You have A+ grade." <<endl;
	else if((m<=90)&&(m>=80))
	cout << "You have A grade." <<endl;
	else if((m<=80)&&(m>=70))
	cout << "You have B+ grade." <<endl;
	else if((m<=70)&&(m>=60))
	cout << "You have B grade." <<endl;
	else if((m<=60)&&(m>=50))
	cout << "You have C grade." <<endl;
	else if((m<=50)&&(m>=40))
	cout << "You have D grade." <<endl;
	else
	cout << "You are fail."<<  endl;
	return 0;
}

//coded by Tanzeela
  //Do again and again

