#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double discriminant,root1,root2;
	cout << "Enter the coefficient a,b and c of the quadratic equation :";
	cin >> a >> b >> c;
	discriminant = b*b-4*a*c;
	if(discriminant > 0)
	{
	root1= (-b+sqrt(discriminant))/(2*a);
	root2= (-b-sqrt(discriminant))/(2*a);
	cout << "Roots are real and different " << endl;
	cout << "Root 1 = " << root1 << endl;
	cout << "Root 2 = " << root2 << endl;
	}
	else if(discriminant = 0)
	{
		root1= -b/(2*a);
		cout << "Roots are real and same " << endl;
		cout << "Root 1 = Root 2 " << root1;
	}
	else
	{
		double realpart;
		realpart = -b/(2*a);
		double imaginarypart;
		imaginarypart=sqrt(-discriminant)/(2*a);
		cout << "Roots and complex are different ";
		cout << "root 1 =" << realpart << "+ " << imaginarypart << "i" <<endl;
		cout << "root 1 =" << realpart << "- " << imaginarypart <<"i" << endl;
	}
	return 0;
}
