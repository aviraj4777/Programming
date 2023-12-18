#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num1(5, 1);
    vector<int> num2(10, 1);

    vector<int> res(15);

    int n1 = 5, n2 = 10;
    while (n1--) {
        res[n1] = num1[n1];
        num1.pop_back();
    }
    while (!num2.empty() && n2--) {
        res[n2 ] = num2[n2];
        num2.pop_back();
    }
    
    for(auto it : res) {
        cout<<it<<" ";
    }
    return 0;
}