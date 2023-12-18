#include <iostream>
using namespace std;
class complex; // forward declaration
class calculator
{
public:
  int add(int a, int b)
  {
    return (a + b);
  }
  int sumRealComplex(complex,complex);// we did not define the function here because we have not
  int sumImgComplex(complex,complex);// defined the data members of the complex class. 
};
class complex
{
  int a, b;
  //Individually declaring functions as friends 
    // friend int calculator ::sumRealComplex(complex,complex);//here we are making the function of calculator as a friend to complex class
    // friend int calculator ::sumImgComplex(complex,complex);//so that it can acces the private members of the complex class.
  //Above method is correct but if we have so many functions then it is difficult to make each function as friend to complex class.
  //Hence we will make entire calculator class as friend to complex class so that we can access each function of calculator class.
  
  //  Aliter: Declaring the entire calculator class as friend
  friend class calculator;

public:
  void setData(int n1, int n2)
  {
    a = n1;
    b = n2;
  }
  void showData()
  {
    cout << "Complex no. is : " << a << " + " << b << "i" << endl;
  }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
  return (o1.a + o2.a);
}
int calculator::sumImgComplex(complex o1, complex o2)
{
  return(o1.b + o2.b);
}
int main()
{
  system("cls");
  complex o1, o2;
  o1.setData(1, 4);
  o2.setData(5, 7);
  o1.showData();
  o2.showData();
  calculator calc;
  int real = calc.sumRealComplex(o1,o2);
  int img = calc.sumImgComplex(o1,o2);
  // cout<<"The sum of real part of o1 and o2 is "<<real<<endl;
  // cout<<"The sum of imaginary part of o1 and o2 is "<<img<<endl;
  cout<<"The sum of two complex number is "<<real<<" + "<<img<<"i"<<endl;
  return 0;
}