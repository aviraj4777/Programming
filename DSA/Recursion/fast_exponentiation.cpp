#include <bits/stdc++.h>
using namespace std;
int expo(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int ans = expo(a, b/2);
    if (b & 1)
        return a * ans * ans;
    else
        return ans * ans;
}
int main()
{
    system("cls");
    cout<< expo(5, 5);
    return 0;
}