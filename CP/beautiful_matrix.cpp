#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int mat[5][5];
	int r = 0, c = 0;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin>>mat[i][j];
			if (mat[i][j] == 1) {
				r = i;
				c = j;
			}
		}
	}

	int ans = abs(2 - r) + abs(2 - c);	
	cout<<ans;
}