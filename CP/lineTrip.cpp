#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n>>x;
        vector<int> gasSt(n);
        for (int i = 0; i < n; i++) {
            cin>>gasSt[i];
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) res = gasSt[i];
            else res = max(res, gasSt[i] - gasSt[i - 1]);
            // cout<<res<<endl;
        }
        res = max(res, 2 * (x - gasSt[n - 1]));

        cout<<res<<endl;

    }
    return 0;
}