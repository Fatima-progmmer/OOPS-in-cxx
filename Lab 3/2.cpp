#include<iostream>
using namespace std;
int main()
{
	int aa[5];
	cout << "Enter arrays values \n";
	for (int x = 1; x <= 5; x++)
	cin >> aa[x];
	cout << "sort in ascending order " << endl;
	for (int x = 1; x <= 5; x++)
		{
			for (int j = 1 + x; j <= 5; j++)
			{
				if (aa[x] > aa[j])
				{
					int temp;
					temp = aa[x];
					aa[x] = aa[j];
					aa[j] = temp;
				}
			}
		}
	for (int x = 1; x <= 5; x++)
	cout << aa[x] << "	";
	return 0;
}
