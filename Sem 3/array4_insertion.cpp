#include <iostream>
using namespace std;
void insertion (int *arr, int key, int value, int &n)
{
    n = n + 1;
    for (int i = n; i >= key; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[key - 1] = value;
}

int main()
{
    system("cls");
    int n, pos, key, value;
    cout << "Enter the size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"Enter the position to insert "<<endl;
    cin>>key;

    cout<<"Enter the value to insert "<<endl;
    cin>>value;

    insertion(arr, key, value, n);

    cout << "Priinting after insertion " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}