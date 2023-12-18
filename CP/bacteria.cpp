#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x;
    cin>>x;
    int ans = 1;
    while (x > 1) {
        if (x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = x - 1;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}