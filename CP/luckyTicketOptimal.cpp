#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getSum(string &st) {
    ll sum = 0;
    for (auto i : st) {
        sum += (i - '0');
    }
    return sum;
}
ll cntPairs(vector<string> &inp) {
    vector<vector<ll>> dp(11, vector<ll> (60, 0));
    ll ans = 0;

    for (string &it : inp) {
        ll sum = getSum(it);
        ll n = it.length();
        dp[n][sum]++;
    }

    for (string &it : inp) {
        ll sum = getSum(it);
        ll n = it.length();
        ans += dp[n][sum];

        ll rs = 0, rc = 0;
        for (int i = n - 1; i > 0; i--) {
            rs += (it[i] - '0');
            rc++;

            ll leftRem = n - rc;
            ll leftSum = sum - rs;

            ll rightNew = leftRem - rc;
            ll rightSum = leftSum - rs;

            if (rightSum >= 0 && rightNew >= 0 && (rc + leftRem + rightNew) % 2 == 0) {
                ans += dp[rightNew][rightSum];
            }
        }

        rs = 0, rc = 0;
        for (int i = 0; i < n - 1; i++) {
            rs += (it[i] - '0');
            rc++;

            ll rightRem = n - rc;
            ll rightSum = sum - rs;

            ll leftNew = rightRem - rc;
            ll leftSum = rightSum - rs;

            if (leftSum >= 0 && leftNew >= 0 && (rc + rightRem + leftNew) % 2 == 0) {
                ans += dp[leftNew][leftSum];
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string> inp(n);
    for (auto &i : inp) {
        cin>>i;
    }
    ll ans = cntPairs(inp);
    cout<<ans;
    return 0;
}