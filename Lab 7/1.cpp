#include<iostream>
using namespace std;
class point
{
	private:
   		int x_coordinate;
		int y_coordinate; 
    public:  
void get()
{
	cout << "Enter x value:";
   cin >> x_coordinate;
   cout << "Enter y value :";
   cin >> y_coordinate;
}
	    void show() 
		{  
		cout << x_coordinate << " , ";
		  cout << y_coordinate << "\n";  
		}  
		point operator+(point op2); 
	    point operator++(); 
};  // Overload + for point. 
point point::operator+(point op2) 
{ 
	 point temp;
     temp.x_coordinate = op2.x_coordinate + x_coordinate; 
	  temp.y_coordinate = op2.y_coordinate + y_coordinate;
	   return temp;  
}  // Overload prefix ++ for point. 
point point::operator++() 
{ 
	x_coordinate++; 
	 y_coordinate++; 
	  return *this;  
}  
int main() 
 {
   point ob1, ob2;
   cout << "Fist value " << endl;
   ob1.get();
   cout << "Second value:" << endl;
   ob2.get();
     ob1.show(); // displays 10 20 
	  ob2.show(); // displays 5 30  
	    ob1.show(); // displays 15 50 
		 ++ob1;  
		 ob1.show(); 
		  return 0;  
		  } 

//code by Tanzeela
	//pratice make perfect so don't loss hope
		//Try again and again

