#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 5;
    for(int row = 1; row<=n; row++)
    {
        for(int col = 1; col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row = 1; row<=n-1; row++)
    {
        for(int col = 1; col<=n-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}