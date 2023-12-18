#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int painterCount = 1;
    int unitCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(unitCount + arr[i] <= mid)
        {
            unitCount += arr[i];
        }
        else
        {
            painterCount++;
            if(painterCount > m || arr[i] > mid)
            {
                return false;
            }
            unitCount = arr[i];
        }
    }
    return true;
}
int painterPartition(int arr[], int n, int m)
{
    int s = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1; // in case answer is not found return - 1
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
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
    int arr[] = {10, 10, 10, 10};
    int n = 4;
    int m = 2;
    cout<<painterPartition(arr, n, m);
    return 0;
}