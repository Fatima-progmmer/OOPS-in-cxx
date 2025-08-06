#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string line;
	ifstream nm("first.txt");
	ifstream nam("Second.txt");
	ofstream cp("first.txt",ios::app);
	ofstream cpy("Second.txt",ios::app);
	"Second.txt"="first.txt";
	return 0;
}

//coded by Tanzeela fatima

