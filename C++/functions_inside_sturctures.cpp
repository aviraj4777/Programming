#include <iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout<<"Enter bookid, title and price : ";
        cin>>bookid>>title>>price;
    }
    void display()
    {
        cout<<"\n"<<bookid<<"\n"<<title<<"\n"<< price;
    }
};
int main()
{
    system("cls");
    book b1;
    b1.input();
    cout<<"\nDetails of b1 :";
    b1.display();
    return 0;
}