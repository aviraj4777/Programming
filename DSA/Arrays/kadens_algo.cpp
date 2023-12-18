#include <bits/stdc++.h>
using namespace std;
int kadensBrut(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
int kadensAlgo(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int maxSubArraySum(int arr[], int n)
{
    int maxSum = INT_MIN, curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum = curSum + arr[i];
        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    system("cls");
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int arr2[] = {-7 -8 -16 -4 -8 -5 -7 -11 -10 -12 -4 -6 -4 -16 -10};
    int n = 15;
    cout << "The maximum sub-array sum is : " << kadensAlgo(arr2, n);
    // cout << "\nThe maximum sub-array sum is : " << kadensBrut(arr2, n);
    return 0;
}