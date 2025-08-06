#include<iostream>
using namespace std;
int main()
{
	float *a;
	float *b;
	float *c;
	float x=12,y=18,z=56;
	int result;
	a=&x;
	b=&y;
	c=&z;
	result=*a+*b+*c;
	cout <<"Result :"<<result << endl;
	return 0;
}

//coded by Tanzeela
  //Do again and again

