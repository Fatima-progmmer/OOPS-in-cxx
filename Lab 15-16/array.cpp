//                Array(Complete Concept)
#include <iostream>
using namespace std;
int main()
{
int oneD[2] = {1,2}; 
cout << "Single Dimensional" << endl;
cout << oneD[0] << " " << oneD[1] << endl;
cout << "Using Loop" << endl ;
for(int i=0; i<2; i++){
cout << oneD[i] ;
cout << " ";
}
cout << endl;
////////////////////
cout << "Two Dimensional" << endl;
int twoD[2][2] = {{1,2} , {3,4}} ;
cout << twoD[0][0] << " " << twoD[0][1] << endl;
cout << twoD[1][0] << " " << twoD[1][1] << endl;
cout << "Using Loop" << endl;
for(int outer=0; outer<2; outer++)
{
for(int inner=0; inner<2; inner++)
{
cout << twoD[outer][inner] ; /// [0][0], [0][1], //
cout << " ";
}
cout << endl;
}
//////
cout << "Three Dimensional" << endl;
int threeD[2][2][2] = { {{1,2} , {3,4}},{{5,6} , {7,8}} } ;
cout <<threeD[0][0][0] << " " << threeD[0][0][1] << endl;
cout <<threeD[0][1][0] << " " << threeD[0][1][1] << endl;
cout <<threeD[1][0][0] << " " << threeD[1][0][1] << endl;
cout <<threeD[1][1][0] << " " << threeD[1][1][1] << endl;
cout << "Using Loop" << endl;
for(int mostouter=0; mostouter<2; mostouter++)
{
for(int outer=0; outer<2; outer++)
{
for(int inner=0; inner<2; inner++)
{
cout << threeD[mostouter][outer][inner] ;
}
cout << endl;
}
}
///////
cout << "Using Page and Table Concept" << endl;
for(int page=0; page<2; page++)
{
for(int row=0; row<2; row++)
{
for(int col=0; col<2; col++)
{
cout << threeD[page][row][col] ;
}
cout << endl;
}
}
return 0;
}
