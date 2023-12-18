#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		int n;
        cin>>n;
        vector<ll> rows(n), cols(n);
        ll minRow = LONG_LONG_MAX;
        ll minCol = LONG_LONG_MAX;

        for (ll i = 0; i < n; i++) {
            cin>>rows[i];
            minRow = min(minRow, rows[i]);
        }
        for (ll i = 0; i < n; i++) {
            cin>>cols[i];
            minCol = min(minCol, cols[i]);
        }

        ll sumRow = 0, sumCol = 0;

        for (int i = 0; i < n; i++) {
            sumRow += rows[i];
            sumCol += cols[i];
        }
        // cout<<sumRow<<" "<<sumCol<<endl;

        ll res1 = sumRow + (n * minCol);
        ll res2 = sumCol + (n * minRow);

        cout<<min(res1, res2)<<endl;
        
	}
}