#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = 9, x = 5;
    int first = firstOccurence(arr, n, x);
    int last = lastOccurence(arr, n, x);
    cout << first << endl;
    cout << last << endl;
    cout<<"Total no. of occurences is "<<last - first + 1;
    return 0;
}