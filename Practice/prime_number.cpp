#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int t;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            t = 0;
            break;
        }
    }
    if (t == 0)
        cout << "Number is Prime" << endl;

    return 0;
}