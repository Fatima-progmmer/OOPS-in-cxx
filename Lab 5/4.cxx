
#include <iostream>
using namespace std;
struct Date 
{
    int day;
    int month;
    int year;
};
struct Employee
 {
    string name;
    Date joiningDate;
    string designation;
};

int main() 
{
    Employee emp1 = {
        "John Doe",
        {10, 5, 2020}, 
        "Manager"
    };

    cout << "Employee Name: " << emp1.name << endl;
    cout << "Date of Joining: " << emp1.joiningDate.day << "-" << emp1.joiningDate.month << "-" << emp1.joiningDate.year << endl;
    cout << "Designation: " << emp1.designation << endl;

    return 0;
}
