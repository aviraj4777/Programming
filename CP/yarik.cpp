#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        ll cur = arr[0];
        ll ans = arr[0];

        for (int i = 1; i < n; i++) {
            if (cur < 0) cur = 0;
            cur += arr[i];
            if (cur < 0 || (abs(arr[i - 1] % 2) == abs(arr[i] % 2))) {
                cur = arr[i];
            }
            ans = max(cur, ans);
        }
        cout<<ans<<" "<<endl;
    }
    return 0;
}