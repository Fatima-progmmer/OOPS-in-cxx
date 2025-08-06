#include<iostream>
using namespace std;
class Distance
{
	private:
	int feet;
	float inches;
	public:
	void getdist()
	{
		cout << "Enter feet = " ;
		cin >> feet;
		cout << "Enter inches =" ;
		cin >> inches;
	}
	void showdist()
	{
		cout << feet  << "/ " << inches << endl;
	}
};
int main()
{
	Distance dist1;
	
	dist1.getdist();
	
	cout << "distance 1 = "; 
	dist1.showdist();
	cout << endl;
	return 0;
}