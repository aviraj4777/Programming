#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int i , j;
    int n = 4;
    int counter = n ; //for 2nd method
    
    //First Method
    // for(int i = 1; i<=n ; i ++)
    // {
    //     for(int j = 1;  j<= (n-i)+1 ; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //2nd Method

for(int i = 1; i<=n ; i ++)
    {
        for(int j = 1;  j<=counter ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        counter--;
    }
    return 0;
}