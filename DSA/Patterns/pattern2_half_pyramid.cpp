#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int i, j;
    int n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}