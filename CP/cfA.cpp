#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while (t--) {
		int n, k;
		cin>>n>>k;

		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin>>arr[i];
		}

		bool flag = false;

		for (int i = 0; i < n; i++) {
			if (arr[i] == k){
				flag = true;
				break;
			} 
			
		}

		if (flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}