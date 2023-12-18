#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--) {
        string st;
        cin>>st;
        int n = st.length();
        int cntb = 0, cntB = 0;
        string res = "";
        for (int i = n - 1; i >= 0; i--) {
            if (st[i] == 'b') {
                cntb++;
                continue;
            }
            else if (st[i] == 'B') {
                cntB++;
                continue;
            }
            else if (cntB > 0 && isupper(st[i])) {
                cntB--;
            }
            else if (cntb > 0 && islower(st[i])) {
                cntb--;
            }
            else res += st[i];
        }
        reverse(res.begin(), res.end());
        cout<<res<<endl;
    }
    return 0;
}