#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string st;
        cin>>st;
        vector<int> lex;
        for (int i = 0; i < n; i++) {
            while (!lex.empty() && st[i] > st[lex.back()]) lex.pop_back();
            lex.push_back(i);
        }

        int lex_size = lex.size();
        char first = st[lex[0]];
        int firstCnt = 0;
        for (int i = 0; i < lex_size; i++) {
            if (st[lex[i]] == first) firstCnt++;
        }

        for (int i = 0; i < lex_size / 2; i++) {
            swap(st[lex[i]], st[lex[lex_size - i - 1]]);
        }

        if (is_sorted(st.begin(), st.end())) cout<<lex_size - firstCnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}