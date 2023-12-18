#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin>>arr[i];
    }
    long long res = 0;
    int currHouse = 1;

    for (int i = 0; i < m; i++) {
        if (currHouse == arr[i]) continue;
        else if (currHouse < arr[i]) {
            res += (arr[i] - currHouse);
            currHouse = arr[i];
        }
        else {
            res += (n - currHouse + 1);
            res += (arr[i] - 1);
            currHouse = arr[i];
        }
    }
    cout<<res;
    return 0;
}