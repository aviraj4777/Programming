#include <iostream>
using namespace std;
int fact(int);
int main()
{
    system("cls");
    cout<<"Enter the no for factorial: "<<endl;
    int n;
    cin>>n;
    int m = fact(n);
    cout<<"The factorial of "<<n<<" is "<<m<<endl;
    // int fact = 1;
    // while(n>0)
    // {
        
    //     fact = fact * n;
    //     n--; 
    // }
    // cout<<"The factorial is: "<<fact<<endl;

    return 0;
}
int fact(int a)
{
    int m = 1;
    if(a==0||a==1)
    {
        return 1;
    }
    else
    m = a * fact(a-1);

    return m;
    
}