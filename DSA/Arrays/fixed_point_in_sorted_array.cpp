#include <bits/stdc++.h>
using namespace std;
int fixedPoint(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == mid)
        {
            ans = mid;
            return ans;
        }
        else if (mid > arr[mid])
        {
            s = mid + 1;
        }
        else if (mid < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {-10, -5, 0, 3, 7};
    int n = 5;
    cout<<fixedPoint(arr, n);
    return 0;
}