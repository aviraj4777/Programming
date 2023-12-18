#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dig = 12321;
    int one, two, three, four, five;
    one = dig % 10;
    two = dig % 100;
    three = dig % 1000;
    four = dig % 10000;
    five = dig % 100000;

    cout<<one<<two<<three<<four<<five;
    int sum = one + two + three + four + five;

    int rev = one * 10000 + two * 1000 + three * 100 + four * 10 + five;
    cout<<dig<<" "<<rev;

    if (dig == rev) cout<<"Palindrom "<<endl;
    else cout<<"Not Palindrome "<<endl; 
    return 0;
}