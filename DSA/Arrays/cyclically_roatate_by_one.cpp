#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
 
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    rotate(arr, n);
    print(arr, n);
    return 0;
}