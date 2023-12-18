#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 8;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == n || col == 1)
            {
                cout << "* ";
            }
            else if (row == col || col == n - row + 1)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}