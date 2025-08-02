#include<string> 
#include<cctype> 
#include<iostream>
using namespace std; 
int main() 
{ 
char str[21]; 
cout <<"Enter a string of at least 20 characters :";
 cin.getline(str,21);
 for(int i=1;i<=21;i++) 
 {
  str[i]=tolower(str[i]); 
 }
  cout<<"string in lowercase:"<<str<<endl;
  return 0;
}
