#include<iostream>]
int sum(int & , int &); //Here & is not addressof operator. it is used for reference.
using namespace std;
int main() 
{ 
  system("cls");
   int a =5, b = 6;
   int s = sum(a,b);
   cout<<"sum is :"<< s ;
  return 0 ; 
}
int sum(int &x, int &y){
    return(x+y);
}