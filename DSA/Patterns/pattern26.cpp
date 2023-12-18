#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 6;
    int m = n - 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << m << " ";
        }
        m++;
        cout << endl;
    }
    m--;
    for (int row = n - 1; row >= 1; row--)
    {
        m--;
        for (int col = 1; col <= row; col++)
        {
            cout << m << " ";
        }
        cout<<endl;
    }
    return 0;
}