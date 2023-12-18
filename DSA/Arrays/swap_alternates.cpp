#include<iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    int i = 0;
    while(i+1<n)
    {
        swap(arr[i], arr[i+1]);
        i+=2;
    }
}
void print(int arr[], int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main() 
{ 
  system("cls");
   int arr[100];
   int n;
   cin>>n;
   for(int i = 0; i<n;i++)
   {
       cin>>arr[i];
   }
   swapAlternate(arr,n);
   print(arr,n);
  return 0 ; 
}