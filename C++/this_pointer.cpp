#include <iostream>
using namespace std;
class Box
{
    private:
     int l,b,h;
    public:
    void setDimension(int l,int b, int h)
    {
        this->l = l; this->b = b; this->h = h;
    }
    void showDimension()
    {
        cout<<"\nl="<<l<<"\nb="<<b<<"\nh="<<h;
    }
};
int main()
{
    system("cls");
    Box *p,smallBox;
    p=&smallBox;
    p->setDimension(12,10,5);
    p->showDimension();
    return 0;
}