#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "\na=" << a << " b=" << b;
    }
    complex operator+(complex c)    // or complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a;  // here a is the 'a' value of c1 i.e caller.
        temp.b = b + c.b;  // here b is the 'b' value of c1 i.e caller.
        return temp;
    }
};
int main()
{
    system("cls");
    complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    // c3 = c1.add(c2);  here c1 is caller and add is calling function c2 is argument.
    c3 = c1 + c2; // c3 = c1.operator+(c2);
    c3.showData();
    return 0;
}