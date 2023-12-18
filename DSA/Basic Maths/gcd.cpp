#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int main()
{
    system("cls");
    cout<<gcd(12,8);
    return 0;
}