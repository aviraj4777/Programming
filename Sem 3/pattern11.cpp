#include <iostream>
using namespace std;
float fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}
int main()
{
    system("cls");
    int n;
    cin >> n;

    float sum;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            float temp = i / fact(i);
            sum = sum + temp;
        }

        else
        {
            float temp = i / fact(i);
            sum = sum - temp;
        }
    }

    cout << sum;
    return 0;
}