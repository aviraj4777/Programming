#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a, b;
    cout << "Enter value of a and b" << endl;
    cin >> a >> b;

    cout << "Which operation" << endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    }

    switch (a + 2 * b)
    {
    case 0:
        cout << "in ZERO" << endl;
        break;
    case 1:
        cout<<"in ONE";
    default:
        cout<<"In default";
    }

    return 0;
}