#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void display()
		{
			cout << "Shape class" << endl;
		}
};
class rectangle:public shape
{
	public:
	 void display()
		{
			cout << "Rectangle class " << endl;
		}
};
class Triangle:public shape
{
	public:
		void display()
		{
			cout << "Triangle class " << endl;
		}
};
int main()
{
	shape *hoe;
	shape f;
	shape s;
	shape t;
	hoe=&f;
	hoe->display();
	hoe=&s;
	hoe->display();
	hoe=&t;
	hoe->display();
	return 0;
}

//coded by Tanzeela fatima

