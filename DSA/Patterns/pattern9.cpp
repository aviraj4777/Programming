#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 12;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        if (row == 1 || row == n)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "*";
            for (int col = 1; col <= (2 * row) - 3; col++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}