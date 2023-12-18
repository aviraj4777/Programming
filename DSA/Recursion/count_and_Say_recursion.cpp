#include <bits/stdc++.h>
using namespace std;

void countAndSay(int n, string str[])
{
    if (n == 0)
        return;

    int digit = n % 10;
 
    n = n / 10;

    countAndSay(n, str);

    cout<<str[digit]<<" ";
}

int main()
{
    system("cls");
    string str[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n; 
    cin>>n;
    cout<<"\n\n";
    countAndSay(n, str);
    return 0;
}