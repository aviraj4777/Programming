#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        char ch = st[0];
        int row = st[1] - '0';
        for (int i = 1; i <= 8; i++)
        {
            if (i != row)
                cout << ch << i << endl;
        }
        for (char c = 'a'; c <= 'h'; c++)
        {
            if (c != ch)
            {
                cout << c << row << endl;
            }
        }
    }
    return 0;
}