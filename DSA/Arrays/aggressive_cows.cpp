#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - lastPos >= mid)
        {
            cowCount++;
            if(cowCount >= m)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}
int aggressiveCows(int arr[], int n, int m)
{
    sort(arr, arr + n);
    int s = 0;
    int e = arr[n - 1];
    int ans;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
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
    int arr[] = {1,2,4,8,9};
    int n = 5;
    int m = 3;
    cout<<aggressiveCows(arr, n, m);
    return 0;
} 