#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int m=0;
    int n=1;
    int o;
    cout<<"Enter the no. upto which you want to print "<<endl;
    int a;
    cin>>a;
    cout<<m<<" "<<n<<" ";
    for(int i = 0;i<a;i++)
    {
        o = m + n;
        m = n;
        n = o;
        cout<<o<<" ";
    }
    return 0;
}