#include <iostream>
using namespace std;
class A
{
    public:
    virtual void f1()
    {

    }

};
class B:public A
{
    public:
    void f1()  //function overriding
    {

    }
};
int main()
{
    system("cls");
    A *p,o1;
    B o2;
    p = &o2; // address of child class in pointer of parent class
    p->f1(); // B
    return 0;
}