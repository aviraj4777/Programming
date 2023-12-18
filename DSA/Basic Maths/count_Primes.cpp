class Solution {
public:
    int countPrimes(int N) {
        if(N < 3)
        return 0;
    int cnt = 0;
    bool prime[N];
    for(int i = 2 ; i < N ; i++)
        prime[i] = true;
    for(int i = 2 ; i * i < N ; i++)
    {
        if(prime[i])
            for(int j = i * i ; j < N ; j += i)
                prime[j] = false;
    }
    for(int i = 2 ; i < N ; i++)
        if(prime[i])
            cnt++;
    return cnt;
}

};