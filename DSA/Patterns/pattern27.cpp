#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 4;
    int counter = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << counter++ << " ";
            if (col < row)
                cout << "* ";
        }
        cout << endl;
    }
    counter-=n;
    int temp = counter;
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout<<temp++<<" ";
            if(col<row)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
        counter -= (row-1);
        temp = counter;        
    }
    return 0;
}