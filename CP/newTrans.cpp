#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, t;
    cin>>n>>t;
    // unordered_map<int, int> mp;
    // mp[1] = 1;
    int flag = 0;
    int j = 1;
    int cur;
    for (int i = 1; i < n; i++) {
        cin>>cur;
        if (i != j) continue;
        j = i + cur;
        if (j == t) {
            flag = 1;
            break;
        }
    }
    if (flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}