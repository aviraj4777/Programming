#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    //cout << "The value of num is: " << num << endl;
    //if statement
    if(num>0)
    {
        cout<<"Number is positive"<<endl;
    }

    //if-else statement
    if(num==5)
    {
        cout<<"Number is 5"<<endl;
    }
    else
    {
        cout<<"number is not 5"<<endl;
    }

    //if-elseif
    if(num==1)
    {
        cout<<"num is 1"<<endl;
    }
    else if(num==2)
    {
        cout<<"num is 2"<<endl;
    }
    else if(num==3)
    {
        cout<<"num is 3"<<endl;
    }
    else
    {
        cout<<"Num nahi pata"<<endl;
    }

    //switch

    switch(num)
    {
        case 0: cout<<"I am in case 0"<<endl;
        break;
        case 2: cout<<"I am in case 2"<<endl;
        break;
        case 7: cout<<"I am in case 7"<<endl;
        default: cout<<"I am in default case"<<endl;
        break;
    }
    return 0;
}