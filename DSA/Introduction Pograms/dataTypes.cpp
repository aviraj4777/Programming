#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a = 5;
    cout<<"Value of a is: "<<a<<endl;

    bool b = true;// we can also use 0 and 1 insted of false and true
    cout<<"value of b is "<<b<<endl;

    float f = 2.3;
    cout<<"Value of f is: "<<f<<endl;

    char ch = 'd';
    cout<<"Value of ch is : "<<ch<<endl;
    cout<<"size of ch is : "<<sizeof(ch);

    cout<<"size of float is :"<<sizeof(f)<<endl;
    cout<<"size of bool is :"<<sizeof(b)<<endl;
    cout<<"size of double is :"<<sizeof(double)<<endl;
    return 0;
}