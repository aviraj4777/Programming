#include<iostream>
using namespace std;
class complex
{
    private:
      int a,b;
    public:
      void setdata(int x, int y)
      {
          a = x;
          b = y;
      }
      void showdata()
      {
          cout<<"\na="<<a<<" b="<<b;
      }
      friend complex operator-(complex);
};
complex operator-(complex x)
{
    {
          complex temp;
          temp.a = -x.a;
          temp.b = -x.b;
          return temp;
      }
}
int main() 
{ 
  system("cls");
   complex c1, c2;
   c1.setdata(3,4);
   c2 = -c1;  //c1=operator-(c1)
   c1.showdata();
   c2.showdata();
  return 0 ; 
}