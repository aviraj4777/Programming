#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 5;
    for(int row=1;row<=n;row++)
    {
        for(int col = 1; col<=2*n-row-1;col++)
        {
            cout<<"*";
        }
        for(int col = 1;col<=row;col++)
        {
            cout<<row<<"*";
        }
        for(int col = 1; col<=2*n-row-2;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}