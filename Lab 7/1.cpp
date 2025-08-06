#include<iostream>
using namespace std;
class customer
{
	private:
	char customer_Id[15];
	char first[10];
	char last[10];
	char address[20];
	double limit;
	public:
		void input()
		{
			cout << "Enter your ID:";
			cin >> customer_Id;
			cout << "Enter your first name :";
			cin >> first;
			cout << "Enter your last name :";
			cin >> last;
			cout << "Enter your address :";
			cin >> address;
			cin.ignore();
			cout << "Enter your currently credit limit :";
			cin >> limit;
		}
		void output()
		{
			cout << "\nEntered DAta" << endl;
			cout << "Your customer ID is " << customer_Id << endl;
			cout << "YOur first name is " << first << endl;
			cout << "Your last name is " << last << endl;
			cout << "Your address is " << address << endl;
			cout << "Your credit limit is " << limit << endl;
		}
};
int main()
{
	customer hello;
	hello.input();
	hello.output();
	return 0;
}
