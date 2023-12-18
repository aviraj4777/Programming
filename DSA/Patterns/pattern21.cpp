#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n = 5;
    for(int row = 1; row<=n;row++)
    {
        if(row==1)
        cout<<"A";
        else
        {
            char c = 'A';
            int m = 1;
            cout<<c<<" ";
            for(int col = 1; col<=2*row-3;col++)
            {
                if(m<row)
                {
                    cout<<++c<<" ";
                    m++;
                }
                else
                cout<<--c<<" ";
            }
            cout<<"A";
        }
        cout<<endl;
    }
    return 0;
}