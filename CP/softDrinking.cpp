#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int toastDrink = (k * l) / n;
	int limeDrink = (c * d) / n;
	int salt = p / n;

	int ans = 0;

	while(toastDrink >= nl && limeDrink > 0 && salt >= np) {
		toastDrink -= nl;
		limeDrink -= 1;
		salt -= np;
		ans++;
	}

	cout<<ans;
}