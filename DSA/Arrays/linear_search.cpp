#include <iostream>
using namespace std;
bool search(int arr[], int size, int target)
{
    bool m;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            m = true;
            break;
        }
        else
            m = false;
    }
    return m;
}

int main()
{
    system("cls");
    int arr[100];
    int n, target;
    cout << "Enter number of elements :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Input searching element :" << endl;
    cin >> target;
    cout << search(arr, n, target);
    return 0;
}