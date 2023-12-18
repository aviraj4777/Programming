#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        string st;
        cin>>st;

        int res = 0;
        int cntB = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (i - j == k) {
                if (st[j] == 'B') {
                    res += cntB;
                    cntB = 0;
                    j = i;
                }
                else {
                    j++;
                }
            }
            if (st[i] == 'B') cntB++;
        }
        cout<<res<<endl;
    }
    return 0;
}