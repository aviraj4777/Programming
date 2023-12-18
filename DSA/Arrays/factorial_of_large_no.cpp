#include <bits/stdc++.h>
using namespace std;
#define MAX 500
int multiply(int x, int res[], int size);
void factorial(int n)
{
    int res[MAX], size = 1;
    res[0] = 1;

    for (int x = 2; x <= n; x++)
    {
        size = multiply(x, res, size);
    }
    cout << "Factorial of given number is : ";
    for (int i = size-1; i >= 0; i--)
    {
        cout << res[i];
    }
}
int multiply(int x, int res[], int size)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = res[i] * x + carry;
        res[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        res[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}
int main()
{
    system("cls");
    factorial(6);
    return 0;
}