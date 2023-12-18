#include <iostream>
using namespace std;
int area(int, int);
float area(int);
int main()
{
    system("cls");
    int r;
    cout <<"Enter radius of a circle ";
    cin >> r;
    float A = area(r);
    cout<<"Area of circle :"<<A;
    int l,b;
    cout<<"\nEnter length and breadth ";
    cin>>l>>b;
    int a = area(l,b);
    cout<<"Area of rectangle :"<<a;
    return 0;
}
int area(int x , int y){
    return(x*y);
}
float area(int x){
    return(3.14*x*x);
}