#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int cnt = 0;
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                char ch;
                cin>>ch;
                if (ch == 'X') {
                    int r = i, c = j;
                    if (r > 5) {
                        r = 11 - i;
                    }
                    if (c > 5) {
                        c = 11 - j;
                    }
                    cnt += min(r, c);
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}