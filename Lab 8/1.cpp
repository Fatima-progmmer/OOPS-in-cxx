#include<iostream>
using namespace std;
class yourself
{
	private:
		unsigned long contacts[4];
	public:
		void get()
		{
			for(int i=0;i<5;i++)
			cin >> contacts[i];
		}
	friend class frnd;
};
class frnd
{
	public :
		void dislpay()
		{
			yourself chk;
			cout << "\n\nYour numbers are\n\n";
			for(int i=0;i<5;i++)
			cout <<chk.contacts[i] << endl;
		}
};
int main()
{
	yourself chhh;
	frnd check;
	return 0;
}

//coded by Tanzeela
  //Do again and again

