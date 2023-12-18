#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        bool flag = true;

        for (int i = 1; i < n; i++) {
            if (arr[i - 1] <= arr[i]) {
                continue;
            }
            else {
                if (!check(i)) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}