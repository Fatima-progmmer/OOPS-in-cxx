#include<iostream>
using namespace std;
int main()
{
	int matrix[2][2];
    int i,j,a;
    cout << "Enter the elements of the matrix:" << endl;
    for ( i = 1; i <=2; i++)
    {
        for (j = 1; j <=2; j++)
        {
            cin >> matrix[i][j];
        }
    }
     cout << "Entered matrix are " << endl;
    for ( i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            cout  << matrix[i][j] <<" ";
            if(j==2)
            cout << endl;
        }
    }
    int total,b;
    a=matrix[1][1]*matrix[2][2];
    b=matrix[1][2]*matrix[2][1];
    total=a-b;
    cout << "The diagonals of matrix is " << total << endl;
    return 0;
}
