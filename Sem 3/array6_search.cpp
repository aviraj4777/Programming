#include <iostream>
using namespace std;
int search(int *arr, int element, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}
int main()
{
    system("cls");
    //cout<<"\nIMPLEMENTING LINEAR SEARCH \n\n";
    int n, element, pos;
    cout << "Enter the size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search " << endl;
    cin >> element;

    pos = search(arr, element, n);

    if (pos == -1)
        cout << "Element not found " << endl;

    else
        cout << "The position of element is " << pos + 1 << endl;

    return 0;
}