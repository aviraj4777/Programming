#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int rev = 0, a;
    while (n > 0)
    {
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }
    cout << "The reverse of number is " << rev << endl;
    return 0;
}