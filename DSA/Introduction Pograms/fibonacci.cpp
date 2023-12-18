#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int f = -1;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        int sum = f + s;
        cout << sum << " ";
        f = s;
        s = sum;
    }
}
int main()
{
    system("cls");
    int n = 8;
    fibonacci(n);
    return 0;
}