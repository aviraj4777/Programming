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
int binarySearch(int arr[], int m, int n, int target)
{
    int start = m;
    int end = n;

    // int mid = (start+end)/2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int midElement = arr[mid];

        if (midElement == target)
        {
            return mid;
        }

        if (target < midElement)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        // mid = (start+end)/2;
        mid = start + (end - start) / 2;
    }
    return -1;
}
int findPosition(int arr[], int n, int k)
{
    int pivot = findPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1])
    {
        //binary search on below mid part
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {
        //binary search on above part
        return binarySearch(arr, 0, pivot - 1, k);
    }
    return -1;
}
int main()
{
    system("cls");
    int arr[] = {7, 9, 1, 2, 3};
    int n = 5;
    int k = 2;
    cout<<findPosition(arr, n, k);
    return 0;
}
