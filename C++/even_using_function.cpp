#include<iostream>
using namespace std;
bool even(int n){
    if(n%2==0)
      return true;
    else 
      return false;
}
int main() 
{ 
  system("cls");
   int n;
   cout<<"Input the number:";
   cin>>n;
   even(n);
  return 0 ; 
}