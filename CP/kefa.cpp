#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int res = 1;
    int winCnt = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            winCnt++;
        }
        else {
            winCnt = 1;
        }
        res = max(res, winCnt);
    }
    cout<<res;
    return 0;
}