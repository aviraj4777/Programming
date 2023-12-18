#include<bits/stdc++.h>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int n;
  cin>>n;

  int x = 0;
  while(n--) {
    string op;
    cin>>op;
    if (op == "++X" || op == "X++") x = x + 1;
    else x = x - 1;
  }
  cout<<x;
}