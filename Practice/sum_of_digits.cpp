#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int sum = 0;
    int a;
    while(n>0)
    {
        a = n%10;
        sum = sum + a;
        n = n/10;
    }
    cout<<"Sum of digits of number is : "<<sum;
    return 0;
}