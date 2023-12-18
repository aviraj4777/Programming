#include <iostream>
using namespace std;
struct book
{
private:
  int bookid;
  char title[20];
  float price;

public:
  void input()
  {
    cout << "Enter bookid, title and price : ";
    cin >> bookid >> title >> price;
    if (bookid < 0)
      bookid = -bookid;
  }
  void display()
  {
    cout << "\n"
         << bookid << "\n"
         << title << "\n"
         << price;
  }
};
int main()
{
  system("cls");
  book b1;
  b1.input();
  cout << "Detalis of book b1 :";
  b1.display();
  return 0;
}