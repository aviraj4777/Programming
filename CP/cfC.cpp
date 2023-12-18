#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solve(long long n, long long cnt, long long sum) {
	if (sum == 0 && cnt == 0) return true;
	if (n <= 0 || cnt < 0 || sum < 0) return false;
	// cout<<n<<" "<<cnt<<" "<<sum<<endl;
	bool take = false;
	if (n > 0) {
		take = solve(n - 1, cnt - 1, sum - n);
	}
	bool skip = solve(n - 1, cnt, sum);
	
	return take || skip;
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while (t--) {
		long long n, k, x;
		cin>>n>>k>>x;

		bool flag = solve(n, k, x);

		if (flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}

}