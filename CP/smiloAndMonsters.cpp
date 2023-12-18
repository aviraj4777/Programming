#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        ll ans = 0;

        if (sum % 2 == 1)
        {
            ans = 1;
            arr[0]--;
        }

        ll k = sum / 2;

        ll c = 0;
        ll i = 0;
        while (i < n && c + arr[i] <= k) {
            c += arr[i];
            i++;
        }

        ans = ans + k + (n - i);

        cout<<ans<<endl;
    }
}