#include <bits/stdc++.h>
using namespace std;
int cnt, s;
bool check(string &st) {
    int n = st.size();
    if (n & 1) return false;
    int i = 0, j = n - 1;
    int sumFH = 0, sumRH = 0;
    while (i < j) {
        sumFH += st[i++] - '0';
        sumRH += st[j--] - '0';
    }
    return (sumFH == sumRH);
}
void solve(vector<string> &tickets, int idx) {
    if (idx == s) return;
    
}
int main()
{
    int n;
    cin>>n;
    vector<string> tickets(n);
    for (auto &t : tickets) {
        cin>>t;
    }
    s = n;
    cnt = n;
    solve(tickets, 0);
    cout<<cnt;
    return 0;
}