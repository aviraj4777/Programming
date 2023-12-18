#include <iostream>
#include<math.h>
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
        rev = rev + pow(a,3);
        n = n/10;
    }
    if(rev==m)
        cout<<"Armstrong"<<endl;
    else
        cout<<"Not a Armstrong"<<endl;
    return 0;
}