#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 5;
    for(int row = 1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        if(row==1)
        {
            cout<<row;
        }
        else
        {
            int counter = 1;
            int m = counter;
            cout<<counter<<" ";
            for(int col = 1; col<=2*row-3;col++)
            {
                if(m<row)
                {
                    cout<<++counter<<" ";
                    m++;
                }
                else
                cout<<--counter<<" ";
            }
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}