#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Hello, This is from class A"<<endl;
    }
};
class B:public A 
{
    public:
    void show()
    {
        cout<<"This is from class B"<<endl;
    }
};
int main() 
{ 
  system("cls");
  B obj;
  obj.A::show();
  obj.show();
  return 0 ; 
}