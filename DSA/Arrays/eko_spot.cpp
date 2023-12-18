#include <bits/stdc++.h>
using namespace std;
bool isPossibleSolution(int mid, int arr[], int n, int target)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = 0;
        if (arr[i] > mid)
            diff = arr[i] - mid;

        sum = sum + diff;
    }
    if (sum >= target)
        return true;
    else
        return false;
}
int getMaxHeightOfSaw(int arr[], int n, int target)
{
    sort(arr, arr + n);
    int s = 0;
    int e = arr[n - 1];

    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossibleSolution(mid, arr, n, target))
        {
            ans = mid;
            //move right
            s = mid + 1;
        }

        else
        {
            //move left
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {15, 8, 18, 6};
    int target = 30;

    int ans = getMaxHeightOfSaw(arr, 4, target);
    cout << "Answer is " << ans << endl;
    return 0;
}