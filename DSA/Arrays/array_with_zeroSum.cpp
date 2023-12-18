#include <bits/stdc++.h>
using namespace std;
bool arrayExists(int arr[], int n)
{
    vector<int> prefixSum(n);
    int sum = 0;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        prefixSum[i] = sum;
    }
    unordered_map<int, bool> m;
    for (int i = 0; i < n; i++)
    {
        if (prefixSum[i] == 0)
        {
            ans = true;
            break;
        }
        else if (m[prefixSum[i]] == true)
        {
            ans = true;
            break;
        }
        else
        {
            m[prefixSum[i]] = true;
        }
    }
    return ans;
}
int main()
{
    system("cls");
    int n = 5;
    int arr[] = {4,2,-3,1,6};
    if(arrayExists(arr, n))
    {
        cout << "Zero sum subarray is present " << endl;
    }
    else
    {
        cout << "Zero sum subarray is not present " << endl;
    }
    return 0;
}