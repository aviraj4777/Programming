#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 9;
    for(int row = 1; row<=n;row++)
    {
        if(row==1||row==n)
        {
            int m = row;
            for(int col = 1; col<=n-row+1;col++)
            {
                cout<<m++<<" ";
            }
        }
        else
        {
            cout<<row<<" ";
            for(int col = 1;col<=n-row-1;col++)
            {
                cout<<"  ";
            }
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}