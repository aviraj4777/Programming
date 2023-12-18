#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (!flag) {
                cout<<" ";
            }
        }
        else {
            flag = 0;
            cout<<s[i];
        }
        
    }
    return 0;
}