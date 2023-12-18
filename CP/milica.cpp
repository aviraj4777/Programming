#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        int cntA = 0, cntB = 0;
        cntB = count(st.begin(), st.end(), 'B');
        if (cntB == k)
            cout << 0 << endl;
        else
        {
            int preB = 0;
            for (int i = 0; i < n; i++)
            {
                if (st[i] == 'A')
                    cntA++;
                else
                    preB++;

                if (cntB - preB == k)
                {
                    cout << "1\n"
                         << i + 1 << " A" << endl;
                    break;
                }
                if (cntA + cntB == k)
                {
                    cout << "1\n"
                         << i + 1 << " B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}