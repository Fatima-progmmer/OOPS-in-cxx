#include<iostream>
using namespace std;
class base
{
	public:
		void show()
		{
			cout << "Base class " << endl;
		}
		virtual void display()
		{
			cout << "Vitual base class" <<  endl;
		}
};
class drive:public  base
{
	public:
		void show()
		{
			cout << "drive class " << endl;
		}
		 void display()
		{
			cout << "drive  class" <<  endl;
		}
};
int main()
{
	base *obj1;
	base obj;
	drive obj2;
	obj1=&obj;
	obj1->display();
	obj1->show();
	obj1=&obj2;
	obj1->display();
	obj1->show();
	return 0;
}

//coded by Tanzeela
  //Do again and again

