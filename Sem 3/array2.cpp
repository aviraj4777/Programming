#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a[100] = {0}, b[100] = {0}, c[100] = {0};
    int m, n;

    cout << "Enter the no. of elements for 1st array: " << endl;
    cin >> m;

    cout << "Enter the no. of elements for 2nd array: " << endl;
    cin >> n;

    cout << "Input the elements for first array :" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Input the elements for second array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << "After adding the elements of arrays: " << endl;

    int t;
    if (m < n)
        t = n;

    else
        t = m;

    for (int i = 0; i < t; i++)
    {
        c[i] = a[i] + b[i];
        cout << c[i] << " ";
    }

    return 0;
}