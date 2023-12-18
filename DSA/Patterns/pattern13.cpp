#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 10;
    for (int row = 1; row <= n; row++)
    {
        int counter = 1;
        if (row == 1 || row == n)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << counter++;
            }
        }
        else
        {
            cout << counter++;
            for (int col = 1; col <= row - 2; col++)
            {
                cout << " ";
                counter++;
            }
            cout << counter;
        }
        cout << endl;
    }
    return 0;
}