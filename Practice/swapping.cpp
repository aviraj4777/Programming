#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a = 10;
    int b = 20;
    int temp;
    cout << "Before Swapping a and b is:" << a << "    " << b << endl;
    //   temp = a;
    //   a = b;
    //   b = temp;
    //   cout<<"Before Swapping a and b is:"<<a<<"    "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Before Swapping a and b is:" << a << "    " << b << endl;
    return 0;
}