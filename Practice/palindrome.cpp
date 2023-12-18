#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int rev=0, m , a;
    m = n;
    while(n>0)
    {
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    if(rev==m)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a palindrome"<<endl;
    return 0;
}