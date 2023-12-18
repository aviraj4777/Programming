#include <bits/stdc++.h>
using namespace std;
int findPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    system("cls");
    int arr[] = {7, 9, 1, 2, 3};
    int n = 5;
    cout<<findPivot(arr, n);
    return 0;
}