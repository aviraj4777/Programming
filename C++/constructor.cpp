#include <iostream>
using namespace std;
class complex
{
private:
  int a, b;

public:
  complex()
  {
    cout << "Hello Constructor";
  }
};
int main()
{
  system("cls");
  complex c1;
  return 0;
}