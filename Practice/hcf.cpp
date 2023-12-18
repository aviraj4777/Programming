#include <iostream>
using namespace std;
int hcf(int m, int n)
{
    system("cls");
    if (m % n == 0)
        return n;
    else
        return hcf(n, m % n);
}
int main()
{
    cout << "Enter two numbers " << endl;
    int m, n;
    cin >> m >> n;
    cout << hcf(m, n) << endl;
}
