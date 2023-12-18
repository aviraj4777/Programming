#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 5;
    for (int row = 1; row <= n; row++)
    {
        int counter = row;
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        if (row == 1)
        {
            cout << row;
        }
        else
        {
            cout << row << " ";
            int m = counter;
            for (int col = 1; col <= 2 * row - 3; col++)
            {
                
                if (m < 2 * row - 1)
                {
                    cout << ++counter << " ";
                    m++;
                }
                else
                    cout << --counter << " ";
            }
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}