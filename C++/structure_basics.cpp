#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
book input();
void display(book);
int main()
{
    system("cls");
    book b1 , b2 , b3;
    b1={973,"Rich dad poor dad", 450.0};
    cout<<"Details of book b1\n";
    cout<<b1.bookid<<endl;
    cout<<b1.title<<endl;
    cout<<b1.price<<endl;
    b2.bookid = 324;
    b2.price = 435.87;
    strcpy(b2.title,"Hello Everyone");
    cout<<"\nDetails of book b2\n";
    cout<<b2.bookid<<endl;
    cout<<b2.title<<endl;
    cout<<b2.price<<endl;
    b3 = input();
    cout<<"\nDetails of book b3\n";
    display(b3);
    return 0;
}
book input()
{
    book b;
    cout<<"\nEnter book id , book title  and book price ";
    cin>>b.bookid>>b.title>>b.price;
    return (b);
}
void display(book b)
{
    cout<<b.bookid<<endl;
    cout<<b.title<<endl;
    cout<<b.price;
}