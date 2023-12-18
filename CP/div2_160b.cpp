#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();

        vector<int> cnt(2, 0);
        vector<int> prefix_sum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cnt[s[i] - '0']++;
            prefix_sum[i + 1] = prefix_sum[i] + (s[i] - '0');
        }

        int ans = min(cnt[0], cnt[1]);

        for (int i = 0; i < n; i++) {
            // Minimum cost to make all characters before i equal to '0'
            int cost0 = prefix_sum[i + 1]; 

            // Minimum cost to make all characters after i equal to '1'
            int cost1 = (cnt[1] - (prefix_sum[n] - prefix_sum[i]));

            ans = min(ans, cost0 + cost1);
        }

        cout << ans << endl;
    }

    return 0;
}
