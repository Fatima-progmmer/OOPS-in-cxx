#include<iostream>
using namespace std;
class time
{
	private:
		int ss;
		int mm;
		int hh;
	public:
		void get()
		{
			cout << "Enter seconds :";
			cin>> ss;
			cout << "Enter minutes:";
			cin >> mm;
			cout << "Enter hours:";
			cin >> hh;
		}
		void show()
		{
			cout << "The real time is  ";
			cout << hh << "h:" << mm << "m:" << ss  << "s"<< endl;
		}
		time operator++()
		{
			mm=mm+1;
			cout << "Time increased by one minute  ";
			cout << hh << "h:" << mm << "m:" << ss << "s"<< endl;
		}
		time operator--()
		{
			mm=mm-1;
			cout << "Time decreased by one minute  ";
			cout << hh << "h:" << mm << "m:" << ss << "s"<< endl;
			
		}
};
int main()
{
	time kb;
	kb.get();
	kb.show();
	kb.operator++();
	kb.operator--();
 	return 0;
}

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again

