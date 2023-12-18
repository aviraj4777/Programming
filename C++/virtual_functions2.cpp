#include <iostream>
using namespace std;
class A
{
public:
    void f1() {cout<<"f1 from class A \n";}
    virtual void f2() {cout<<"f2 from class A \n";}
    virtual void f3() {cout<<"f3 from class A \n";}
    virtual void f4() {cout<<"f4 from class A \n";}
};
class B : public A
{
public:
    void f1() {cout<<"f1 from class B \n";}
    void f2() {cout<<"f2 from class B \n";}
    void f4(int x) {}
};
int main()
{
    system("cls");
    A *p,o1;
    p=&o1;
    p->f1(); //Early Binding
    p->f2(); //Late Binding
    p->f3(); //Late Binding
    p->f4(); //Late Binding
    //p->f4(5);//Early Binding(Error Because in A f4 has no argument)
    A *P;
    B o2;
    P = &o2;
    P->f1(); //Early Binding A
    P->f2(); //Late Binding B
    P->f3(); //Late Binding A
    P->f4(); //Late Bingding A
    //P->f4(5); //Early Binding A(Error Because in A f4 has no argument)
    return 0;
}