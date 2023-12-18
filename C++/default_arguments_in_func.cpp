#include <iostream>
using namespace std;
int add(int, int, int = 0);//here we are assigning default value to third argument.
int main()
{
    system("cls");
    int a, b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"\nsum is :"<<add(a,b);
    int c;
    cout<<"\nEnter three numbers";
    cin>>a>>b>>c;
    cout<<"\nsum is :"<<add(a,b,c);
    return 0;
}
int add(int x , int y , int z)
{
    return(x+y+z);
}