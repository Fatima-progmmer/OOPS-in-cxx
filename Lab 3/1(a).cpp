#include <iostream>
#include <cmath>
using namespace std;
struct p1
{
	int x1;
	int y1;
};
struct p2
{
	int x2;
	int y2;
};
int main ()
{
	p1 variable;
	p2 angle;
	 variable.x1=10;
 variable.y1=4;
 angle.x2=12;
 angle.y2=6;
	 double square_root;
	 square_root = sqrt((angle.x2-variable.x1)^2+(angle.y2-variable.y1)^2);
	 cout << "The distance of the points is " << square_root;
	return 0;
}
