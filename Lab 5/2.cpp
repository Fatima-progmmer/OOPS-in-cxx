#include<iostream>
using namespace std;
struct meter
{
	float feet;
	float inches;
};
int main()
{
	meter call;
	cout << "Enter the inches :";
	cin >> call.inches;
	cout <<  "Enter the feet :";
	cin >> call.feet;
	call.inches*=0.3048;
	call.feet*=0.025;
	float metr;
	metr = call.inches+call.feet;
	cout << "The length is " << metr << " meter";
	return 0;
}
