#include <iostream>
#include <cmath>
using namespace std;
struct x
{
	int x1;
	int x2;
};
struct y
{
	int y1;
	int y2;
};
int main ()
{
	x variable;
	y angle;
	cout << "Enter the value of point x1 :";
	cin >> variable.x1;
	cout << "Enter the value of point x2 :";
	cin >> variable.x2;
	cout << "Enter the value of point y1 :";
	cin >> angle.y1;
	cout << "Enter the value of point y2 :";
	cin >> angle.y2;
	 double square_root;
	 square_root = sqrt((variable.x2-variable.x1)^2+(angle.y2-angle.y1)^2);
	 cout << "The distance of the points is " << square_root;
	return 0;
}
