#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "\na=" << a << "\nb=" << b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    system("cls");
    complex c1,c2,c3; // c1 is an object.
    c1.set_data(3, 4);
    c2.set_data(5,6);
    c3=c1.add(c2);  // c1 ne add function ko call kiya c2 ek object hai jo argument banke pass hua aur final value ko c3 me assign kiya
    c3.show_data();
    return 0;
} 