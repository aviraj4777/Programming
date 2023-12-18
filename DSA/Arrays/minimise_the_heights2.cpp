#include <bits/stdc++.h>
using namespace std;
int minimiseHeight(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int mini = arr[0];
    int maxi = arr[n - 1];
    int ans = maxi - mini;

    for (int i = 0; i < n; i++)
    {
        mini = min(arr[0] + k, arr[i] - k);
        maxi = max(arr[n - 1] - k, arr[i - 1] + k);
        ans = min((maxi - mini), ans);
    }
    return ans;
}
int main()
{
    system("cls");
    int k = 3, n = 5;
    int arr[] = {3, 9, 12, 16, 20};
    cout<<minimiseHeight(arr, n, k);
    return 0;
}