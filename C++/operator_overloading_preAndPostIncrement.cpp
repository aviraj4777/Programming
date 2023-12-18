#include <iostream>
using namespace std;
class integer
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        cout << "x=" << x << endl;
    }
    integer operator++() // pre incement
    {
        integer i;
        i.x = ++x; 
        return i;
    }
    integer operator++(int)  // post increment(it is not necessary to pass argument)
    {
        integer i;
        i.x = x++;
        return i;
    }
};
int main()
{
    system("cls");
    integer i1,i2;
    i1.setData(3);
    i1.showData();
    i2 = i1++;  // i2 = i1.operator++();
    i1.showData();
    i2.showData();
    return 0;
}