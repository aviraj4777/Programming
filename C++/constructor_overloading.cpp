#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y)  //paraneterized constructor
    {
        a = x;
        b = y;
    }
    complex(int k)  //paraneterized constructor
    {
        a = k;
    }
    complex()  //default constructor
    { }
    complex(complex &m)  //copy constructor
    {
        a=m.a;
        b=m.b;
    }
};
int main()
{
    system("cls");
    complex c1 = complex(3, 4), c2 = 5, c3, c4(5, 6), c5(5); //different types of creating object
    complex c4(c1); //or complex c4=c1
    return 0;
}