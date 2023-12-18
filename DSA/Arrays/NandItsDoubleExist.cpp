#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return true;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
bool checkIfExist(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && binarySearch(arr, i + 1, n - 1, 2 * arr[i]))
            return true;
        if (arr[i] < 0 && arr[i] % 2 == 0 && binarySearch(arr, i + 1, n - 1, arr[i] / 2))
            return true;
    }
    return false;
}
int main()
{
    system("cls");

    return 0;
}