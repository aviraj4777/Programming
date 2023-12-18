#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string temp = "hello";
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == temp[j]) {
            j++;
        }
        if (j >= 5) break;
    }
    // cout<<res<<"\n";
    if (j == 5) cout<<"YES";
    else cout<<"NO";
    return 0;
}