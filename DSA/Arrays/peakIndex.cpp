#include <bits/stdc++.h>
using namespace std;
int peakIndex(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
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
    int arr[] {3,4,5,1};
    int n = 4;
    cout<<peakIndex(arr, n);
    return 0;
}