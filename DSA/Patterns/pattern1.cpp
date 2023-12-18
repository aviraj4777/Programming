#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 4;

    for (int row = 1; row <= n; row++)
    { // for each row , print n stars or we have
        for (int col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}