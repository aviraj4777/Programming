#include <iostream>
using namespace std;
int factorial(int n)
{
    int ans = 1;
    for (int i = n; i >= 1; i--)
    {
        ans = ans * i;
    }
    return ans;
}
int combination(int n, int r)
{
    int val1 = factorial(n);
    int val2 = factorial(n - r);
    int val3 = factorial(r);
    int ans = val1 / (val2 * val3);
    return ans;
}
int main()
{
    system("cls");
    int n = 6;
    for (int row = 0; row <= n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << combination(row, col) << " ";
        }
        cout << endl;
    }
    return 0;
}