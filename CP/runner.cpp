#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> &arr) {
	int n = arr.size();
	vector<int> prefix(n, 0);
	vector<int> suffix(n, 0);


	prefix[0] = arr[0];
	suffix[n - 1] = arr[n - 1];

	for (int i = 1; i < n; i++) {
		prefix[i] = arr[i] + prefix[i - 1];
		suffix[n - i - 1] = suffix[n - i] + arr[n - i - 1];
		
	}
	
	for (int i = 0; i < n; i++) {
		if (prefix[i] == suffix[i]) return i;
	}
	return -1;
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int temp ;
		cin>>temp;
		arr[i] = temp;
	}
	cout<<findPivot(arr);
}