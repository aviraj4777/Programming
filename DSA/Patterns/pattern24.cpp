#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 7;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (row == 1)
                cout << row;
            else
            {
                cout << row << " ";
                if (col < row)
                    cout << "* ";
            }
        }
        cout << endl;
    }
    int m = n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= m; col++)
        {
            if (row == n)
                cout << "1";
            else
            {
                cout << m << " ";
                if (col < m)
                {
                    cout << "* ";
                }
            }
        }
        m--;
        cout<<endl;
    }
    return 0;
} 