#include <iostream>
inline void fun();
using namespace std;
int main()
{
    system("cls");
    cout<<"You are in main.\n";
    fun();
    return 0;
}
void fun()
{
    cout << "You are in fun.";
}