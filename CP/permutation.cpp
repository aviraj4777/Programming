#include<bits/stdc++.h>
using namespace std;

int n = 0;

void permute(string ip, set<string> &res, string op) {
	if (ip.size() == 0) {
		res.insert(op);
		return;
	}

	for (int i = 0; i < ip.size(); i++) {
		op.push_back(ip[i]);
		string ip1 = ip;
		ip.erase(ip.begin() + i);
		permute(ip, res, op);
		op.pop_back();
		ip = ip1;
	}
}
int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;

	n = s.size();

	vector<string> res;
	string temp = "";
	set<string> perm;
	permute(s, perm, temp);
	        
	set<string>::iterator itr;
	for (itr = perm.begin(); itr != perm.end(); itr++) {
	    res.push_back(*itr);
	}

	for (auto it : res) {
		cout<<it<<" ";
	}

}