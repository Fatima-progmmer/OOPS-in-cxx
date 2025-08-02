#include <iostream>
using namespace std;
int main()
{
	int num;
	int total=0;
	cout <<"Enter to a limit :";
	cin >> num;
	for(int i=1;i<=num;i++)
	{
		if(i%2==0)
		total+= i;
	}
	cout << "The total of all even number between 1 to " << num << " is " << total << endl;
	return 0;
}
