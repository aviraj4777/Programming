#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n)
{
    if (n == 0)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }

    if (n % 4 == 0)
    {
        isPowerOfFour(n / 4);
    }
    else
    {
        return false;
    }
}
int main()
{
    //system("cls");
    cout<<isPowerOfFour(5);
    return 0;
}
