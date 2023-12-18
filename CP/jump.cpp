#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> seg(n);
        for (auto &it : seg)
        {
            cin >> it.first >> it.second;
        }

        // for (auto it : seg) cout<<it[0]<<" "<<it[1]<<endl;

        ll l = 0, r = 1e9;
        int k = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            bool check = true;
            ll x = 0, y = 0;

            for (auto it : seg)
            {
                x = max(it.first, x - mid);
                y = min(it.second, y + mid);
                if (y < x)
                {
                    check = false;
                    break;
                }
            }

            if (check)
            {
                k = mid;
                r = mid - 1;
            }

            else
            {
                l = mid + 1;
            }
        }
        cout << k << endl;
    }
    return 0;
}