#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> deg(n + 1, 0);
        for (int i = 1; i < n; i++) {
            int a, b;
            cin>>a>>b;
            deg[a]++;
            deg[b]++;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (deg[i] == 1) cnt++;
        }
        cout<<((cnt & 1) ? (cnt + 1) / 2 : cnt / 2) <<endl;
    }
    return 0;
}