#include <bits/stdc++.h>
using namespace std;

int expo(int x, int n) {
    if (n == 0) {
        return 1;
    }

    if(n & 1) {
        return expo(x, n >> 1) * expo(x, n >> 1) * x;
    }
    else {
        return expo(x, n >> 1) * expo(x, n >> 1);
    }
}
int main()
{
    system("cls");
    cout << "Input base : " << endl;
    int x, n;
    cin >> x;
    cout << "Input Power : " << endl;
    cin >> n;   // x ^ n
    int result = expo(x, n);

    cout<<result;
    // while (n > 0)
    // {
    //     if (n & 1)
    //         result = x * result;
    //     x = x * x;
    //     n = n >> 1;  // n = n / 2;
    // }
    // cout<<result;
    return 0;
}