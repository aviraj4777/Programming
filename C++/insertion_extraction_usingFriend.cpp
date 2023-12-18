#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "\na=" << a << " b=" << b;
    }
    friend ostream &operator<<(ostream &, complex);
    friend istream &operator>>(istream &, complex &);
};
ostream &operator<<(ostream &dout, complex C)
{
    cout << "\na=" << C.a << " b=" << C.b;
    return (dout);
}
istream &operator>>(istream &din, complex &C)
{
    cin >> C.a >> C.b;
    return (din);
}
int main()
{
    system("cls");
    complex c1;
    cout << "Enter a complex number";
    cin >> c1;
    cout << "You entered:";
    cout << c1; // operator<<(cout,c1);
    return 0;
}