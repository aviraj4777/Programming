#include<bits/stdc++.h>
using namespace std;

int cellsWithValue(vector<vector<char>> &grid, int k) {
	int n = grid.size();
	int m = grid[0].size();

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int cellCnt = 0;
			if (i - 1 >= 0 && grid[i - 1][j] == '#') cellCnt++;
			if (i + 1 < n && grid[i + 1][j] == '#') cellCnt++;
			if (j - 1 >= 0 && grid[i][j - 1] == '#') cellCnt++;
			if (j + 1 < m && grid[i][j + 1] == '#') cellCnt++; 

			if (cellCnt >= k) cnt++;
		}
	}
	return cnt;

}
 
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, m, k;
	cin>>n>>m>>k;

	vector<vector<char>> grid(n, vector<char> (m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin>> grid[i][j];
		}
	}

	cout<<cellsWithValue(grid, k);

}