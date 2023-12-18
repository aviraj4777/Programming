#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main()
{
    string st1, st2;
    cin >> st1 >> st2;

    int res = 0;

    int n = st1.length();
    for (int i = 0; i < n; i++)
    {
        if ((char)tolower(st1[i]) == (char)tolower(st2[i])) continue;

        else if ((char)tolower(st1[i]) < (char)tolower(st2[i])) {
            res = -1;
            break;
        } 
        else {
            res = 1;
            break;
        }
    }
    cout<<res<<endl;
}