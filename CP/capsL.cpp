#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int ch = 1;
    for (int i = 1; i < n; i++) {
        if (islower(s[i])) {
            ch = 0;
        }
    }
    if (ch) {
        for (int i = 0; i < n; i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            else {
                s[i] = toupper(s[i]);
            }
        }
        cout<<s;
    }
    else {
        cout<<s;
    }
    return 0;
}