#include <bits/stdc++.h>
using namespace std;
int soe(int N) // we are counting primes till less than n.
{
    if (N < 3)
        return 0;
    int cnt = 0;
    vector<bool> prime(N, true);
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i)
                prime[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
        if (prime[i])
            cnt++;
    return cnt;
}
int main()
{
    system("cls");
    cout << soe(13);
    return 0;
}