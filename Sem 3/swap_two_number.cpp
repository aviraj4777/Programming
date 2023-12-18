#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int a = 7;
    int b = 8;

    // int c = b;
    // b = a;
    // a = c;

    // cout<<a<<" "<< b <<endl;

    b = a + b;
    a = b - a;
    b = b - a;

    cout<<a<<" "<< b;
    return 0;
}