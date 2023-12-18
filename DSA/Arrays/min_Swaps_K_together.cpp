#include <bits/stdc++.h>
using namespace std;
int minSwap(int arr[], int n, int k)
{
    int count = 0;
    // first count all element less equal than k
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }
    //checking first window
    int bad = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > k)
            bad++;
    }
    //checking remaining window
    int ans = bad;
    for (int i = 0, j = count; j < n; i++, j++)
    {
        if(arr[i]>k)
        {
            bad--;
        }
        if(arr[j]>k)
        {
            bad++;
        }
        ans = min(ans,bad);
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {2,7,9,5,8,7,4};
    int n = 7;
    int k = 5;
    cout<<"The minimum no. of swap is: "<<minSwap(arr,n,k);
    return 0;
}