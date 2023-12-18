#include <bits/stdc++.h>
using namespace std;
int solve(int amount, vector<int> &coins, int currentCoin)
{
    if (amount == 0)
        return 1;

    if (amount < 0)
        return 0;

    int ways = 0;
    for (int i = currentCoin; i < coins.size(); i++)
    {
        ways += solve(amount - coins[i], coins, i);
    }
    return ways;
}
int main()
{
    system("cls");
    
    return 0;
}