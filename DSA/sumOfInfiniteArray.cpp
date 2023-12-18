#include <bits/stdc++.h>
using namespace std;
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q)
{
    int m = 100000007;
    vector<int> ans(q), b;
    b = arr;
    int i = 0;
    while (q--)
    {
        while (queries[i][1] > b.size())
        {
            b.insert(b.end(), arr.begin(), arr.end());
        }
        //cout<<q;
        int sum = 0;
        for (int j = queries[i][0] - 1; j < queries[i][1]; j++)
        {
            sum += b[j];
            //cout<<sum<<endl;
        }
        ans[i] = sum % m;
        //cout<<ans[i];
        i++;
    }
    return ans;
}
int main()
{
    system("cls");
    vector<int> arr = {1,2,3};
    int q = 2;
    vector<vector<long long>> queries = {{1,3},{1,5}};
    vector<int> ans = sumInRanges(arr,arr.size(), queries, q);
    for(int i = 0; i < q; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}