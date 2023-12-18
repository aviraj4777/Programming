#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
void print(int n)
{
    if (n < 1)
    {
        return;
    }
    print(n - 1);
    cout<<n<<" ";
}
int main()
{
    system("cls");
    cout << fact(5) << endl;
    print(5);
    return 0;
}