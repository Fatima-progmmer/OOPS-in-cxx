#include <iostream>
using namespace std;
struct student
{
	char name[10];
	int roll_num;
	int marks;
};
void showstudent(struct student)
{
	cout << "by pass value " << endl;
	cout << "Name :" << record.name << endl;
	cout << "roll-number :" << record.roll_num << endl;
	cout << "Marks :" << record.marks << endl;
}
void showstudent(struct student*)
{
	student record;
	record.name* = {'T','a','n','z','e','e','l','a'};
	record.marks = 90;
	record.roll_num =12;
	cout << "by pass value " << endl;
	cout << "Name :" << record.name << endl;
	cout << "roll-number :" << record.roll_num << endl;
	cout << "Marks :" << record.marks << endl;
}
int main()
{
	student record;
	record.name = {'T','a','n','z','e','e','l','a'};
	record.marks = 90;
	record.roll_num =12;
	showstudent(record);
	return 0;
}
