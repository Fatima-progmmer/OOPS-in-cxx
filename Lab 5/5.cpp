#include<iostream>
using namespace std;
struct empolyee
{
	string joining_date;
	 string employee_name;
	 string desgination;
};
void taken()
{
	empolyee data[5];
	for(int i=1;i<=5;i++)
	{
		cout << "\n\t"  << i<< " employee data" << endl;
	cout << "Enter " << i << " empolyee name :";
	cin >>data[i].employee_name;
	cout << "Enter " << i << " empolyee joining date :";
	cin >>data[i].joining_date ;
	cout << "Enter " << i << " empolyee designation :";
	cin >> data[i].desgination ;
	}
}
void display()
{
	empolyee data[5];
	for(int i=1;i<=5;i++)
	{
		cout << "\n\t" << i << " employee data " << endl;
	cout<< i << " empolyee name :" << data[i].employee_name ;
	cout << i << " empolyee joining date :" <<data[i].joining_date ;
	cout << i << " empolyee designation :" <<data[i].desgination ;
	}
}
int main()
{
	taken();
	display();
	return 0;
}
