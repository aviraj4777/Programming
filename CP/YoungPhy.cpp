#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int x = 0, y = 0, z = 0;
    while (n--) {
        int a, b, c;
        cin>>a>>b>>c;
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0) {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}