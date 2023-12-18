#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int arr[3];
	for (int i = 0; i < 3; i++) {
		cin>>arr[i];
	}

	sort(arr, arr + 3);

	// cout<<arr[0]<<arr[1]<<arr[2]<<endl;

	cout<<max(arr[1] - arr[0], arr[2] - arr[0]);
}