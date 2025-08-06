
#include <iostream>
using namespace std;

class Employee {
    private:
        int day, month, year;
    
    public:
        Employee(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }
        
        bool operator< (const Employee& emp) {
            if (year < emp.year)
                return true;
            else if (year == emp.year) {
                if (month < emp.month)
                    return true;
                else if (month == emp.month)
                    return day < emp.day;
            }
            return false;
        }
};

int main() {
    Employee emp1(10, 3, 2014);
    Employee emp2(12, 8, 2013);
    
    if (emp1 < emp2)
        cout << "emp2 is more experienced than emp1" << endl;
    else if (emp2 < emp1)
        cout << "emp1 is more experienced than emp2" << endl;
    else
        cout << "Both employees have the same experience" << endl;
    
    return 0;
}
//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again
