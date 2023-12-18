#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y);
    void show_data()
    {
        cout << "\na=" << a << "\nb=" << b;
    }
};
void complex::set_data(int x, int y)
{
    a = x;
    b = y;
}
int main()
{

    system("cls");
    complex c1; // c1 is an object.
    c1.set_data(3, 4);
    c1.show_data();
    return 0;
}