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
bool search(int arr[], int target)
{
    int s = 0;
    int e = 1;
    int val = arr[0] = 3;
    while (val < target)
    {
        s = e;
        e = 2 * e;
        val = arr[e];
    }
    return binarySearch(arr, s, e, target);
}
int main()
{
    system("cls");
    int arr[] = {-1,0,3,5,9,12};
    cout<<search(arr, 8);
    return 0;
}