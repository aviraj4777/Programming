#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        for (int k = 1; k <= n / 2; k++)
        {
            if (n % k == 0)
            {
                ll mx = 0, mn = 1e15, sum = 0;
                for (int i = 1; i <= n; i++)
                {
                    sum += arr[i - 1];
                    if (i % k == 0)
                    {
                        mx = max(mx, sum);
                        mn = min(mn, sum);
                        sum = 0;
                    }
                }
                ans = max(ans, (mx - mn));
            }
        }
        cout << ans << endl;
    }
    return 0;
}