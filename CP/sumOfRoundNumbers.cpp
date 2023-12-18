#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int multip = 1;
		vector<int> temp;
		while (n != 0) {
			int pv = n % 10;
			if (pv != 0) temp.push_back(pv * multip);
			n = n / 10;
			multip *= 10;
		}
		cout<<temp.size()<<endl;
		for (auto it : temp) {
			cout<<it<<" ";
		}
		cout<<endl;
	}
}