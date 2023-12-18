#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> &res, int num, string op) {
        if (num == 0) {
            res.push_back(op);
            return;
        }
        if (op[op.length() - 1] == '0' || op.length() == 0) {
            string op1 = op;
            string op2 = op;
            op1.push_back('0');
            op2.push_back('1');
            solve(res, num - 1, op1);
            solve(res, num - 1, op2);
        }
        if (op[op.length() - 1] == '1') {
            op.push_back('0');
            solve(res, num - 1, op);
        }
        return;
    }
    void generateBinaryStrings(int& num){
        vector<string> res;
        solve(res, num, "");
        for(string x : res) {
            cout<<x<<" ";
        }
    }
int main()
{
    system("cls");
    int n = 3;
    generateBinaryStrings(n);
    return 0;
}