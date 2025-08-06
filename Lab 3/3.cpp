#include <iostream>
using namespace std;
void transpose()
{
    int matrix[2][2];
    int transpose[2][2];
    int i,j;
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
    for (i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}
void adding()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int matrix3[2][2];
    int i,j,k,l;
    cout << "Enter the elements of the matrix 1:" << endl;
    for ( i = 1; i <=2; i++)
    {
        for (j = 1; j <=2; j++)
        {
            cin >> matrix1[i][j];
        }
    }
     cout << "Entered matrix 1 are " << endl;
    for ( i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            cout  << matrix1[i][j] <<" ";
            if(j==2)
            cout << endl;
        }
    }
    cout << "Enter the elements of the matrix 2:" << endl;
    for ( k = 1; k <=2; k++)
    {
        for (l = 1; l <=2; l++)
        {
            cin >> matrix1[k][j];
        }
    }
     cout << "Entered matrix 2 are " << endl;
    for ( k = 1; k <= 2; k++)
    {
        for ( l = 1; l <= 2; l++)
        {
            cout  << matrix2[k][l] <<" ";
            if(l==2)
            cout << endl;
        }
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		matrix3[i][j] = matrix1[i][j]+matrix2[i][j];
	}
	cout << "after adding matrix 1 and  matrix 2 are  the matrix " << endl;
    for ( k = 1; k <= 2; k++)
    {
        for ( l = 1; l <= 2; l++)
        {
            cout  << matrix3[k][l] <<" ";
            if(l==2)
            cout << endl;
        }
	}
}
int main()
{
	transpose();
	adding();
	return 0;
}

