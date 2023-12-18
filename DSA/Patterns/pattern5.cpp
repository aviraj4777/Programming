#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 4;
    for (int i = 1; i <= n; i++)
    // for each row
    {
        // spaces
        for (int j = 1; j <= i - 1; j++)
            cout << " ";
        // stars
        for (int j = 1; j <= n - i + 1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}