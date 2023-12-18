#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 6;
    cout << "*\n";
    for (int row = 1; row <= n; row++)
    {
        cout << "* ";
        int counter = 1;
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col < row)
            {
                cout << counter++ << " ";
            }
            else
            {
                cout << counter-- << " ";
            }
        }
        cout << "*";
        cout << endl;
    }
    for (int row = n - 1; row >= 1; row--)
    {
        cout << "* ";
        int counter = 1;
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col < row)
            {
                cout << counter++ << " ";
            }
            else
            {
                cout << counter-- << " ";
            }
        }
        cout<<"*";
        cout<<endl;
    }
    cout<<"*";
    return 0;
}