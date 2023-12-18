#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int arr[n][2];

		for (int i = 0; i < n; i++) {
			cin>>arr[i][0]>>arr[i][1];
		}

		int maxE = 0, maxS = 0;

		for (int i = 0; i < n; i++) {
			if (arr[i][1] > maxE) {
				maxS = arr[i][0];
				maxE = arr[i][1];
			}
		}

		
		bool flag = true;
		for (int i = 1; i < n; i++) {
			if (arr[i][0] >= arr[0][0] && arr[i][1] >= arr[0][1]) flag = false;
		}
		cout<< (flag == true ? arr[0][0] : -1)<<endl;
	}

}