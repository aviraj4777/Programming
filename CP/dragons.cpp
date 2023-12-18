#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int shakti;
    int n;
    cin>>shakti;
    cin>>n;
    vector<vector<int>> arr(n, vector<int> (2));
    for (int i = 0; i < n; i++) {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }

    sort (arr.begin(), arr.end());

    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (shakti > arr[i][0]) {
            shakti += arr[i][1];
        }
        else {
            flag = 0;
            break;
        }
    }

    if (flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}