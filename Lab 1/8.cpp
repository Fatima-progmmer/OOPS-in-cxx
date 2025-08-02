#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,total;
	float percentage ;
	cout << "Enter your science marks :";
	cin >> a;
	cout << "Enter your english marks :";
	cin >> b;
	cout << "Enter your Mathematics marks :";
	cin >> c;
	cout << "Enter your Urdu marks :";
	cin >> d;
	cout << "Enter your kashmir study  marks :";
	cin >> e;
	total = a+b+c+d+e;
	percentage =(100/500)*total;
	cout << "Your total marks is :" << total << endl;
	cout << "YOur percentage is : " << percentage;
	return 0;
}
