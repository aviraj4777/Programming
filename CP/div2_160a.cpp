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
        int a = 0, b = 0;
        for (int i = 1; i < n; i++) {
            if (st[i] != '0') {
                int f = stoi(st.substr(0, i));
                int s = stoi(st.substr(i));
                // cout<<f<<" "<<s<<endl;
                if (f < s) {
                    a = f;
                    b = s;
                }
                // cout<<a<<" "<<b<<endl;
            }
        }
        (a == b) ? cout<<-1<<endl : cout<<a <<" "<<b<<endl;
    }
    return 0;
}