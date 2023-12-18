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
    complex operator -()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};
int main()
{
    system("cls");
    complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.operator-(); // c3 = -c1;
    c3.showData();
    return 0;
}