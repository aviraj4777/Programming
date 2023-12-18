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
		int n;
		cin>>n;
		vector<int> arr(n);
		arr[0] = 1;
		arr[1] = 3;

		for (int i = 2; i < n; i++) {
			bool flag = false;
			int c = 1;
			while (!flag) {

				if (3 * (arr[i - 1] + c) % (arr[i - 1] + arr[i - 2])) {
					flag = true;
				} 
				else {
					c++;
				}
			}
			arr[i] = arr[i - 1] + c;
		}

		for (auto i : arr) {
			cout<<i<<" ";
		}
		cout<<endl;
	}

}