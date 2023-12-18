#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        vector<int> freq(26, 0);
        int maxf = 0;
        for (int i = 0; i < n; i++)
        {
            maxf = max(++freq[st[i] - 'a'], maxf);
        }

        if (n % 2 == 0)
        {
            if (maxf <= n / 2)
                cout << 0 << endl;
            else
                cout << (n - (n - maxf) * 2) << endl;
        }
        else
        {
            if (maxf <= n / 2)
                cout << 1 << endl;
            else
                cout << (n - (n - maxf) * 2) << endl;
        }
    }
    return 0;
}