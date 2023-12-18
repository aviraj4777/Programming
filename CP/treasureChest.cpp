#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--) {
        int x, y, k;
        cin>>x>>y>>k;

        int minT = 0;
        bool flag = false;
        if (y <= x) minT = x;
        else {
            if (y - x <= k) {
                minT = y;
            }
            else {
                int toDrop = x + k;
                minT = toDrop + 2 * (y - toDrop);
            }
        }
        cout<<minT<<endl;
        
    }
    return 0;
}