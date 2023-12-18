#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    void setValue(int k)
    {
        a = k;
    }
};
class B : public A
{
    public:
    void setData(int x)
    {
        setValue(x);
    }
};
int main()
{
    system("cls");
    B obj;
    obj.setData(4); 
    /* we can not access setvalue directly as it is the protected member
    of class A and it is inherited in public mode in class B hence protected member 
    will go in protected mode and private member of class will go to 
    private mode. */
    return 0;
}