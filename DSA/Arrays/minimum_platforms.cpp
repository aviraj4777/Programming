#include <bits/stdc++.h>
using namespace std;
int miniPlatforms(int arrival[], int departure[], int m, int n)
{
    sort(arrival, arrival + n);
    sort(departure, departure + m);
    int platform = 1, i = 1, j = 0, ans = 0;
    while (i < m && j < n)
    {
        if (arrival[i] > departure[j])
        {
            platform--;
            j++;
        }
        if (arrival[i] < departure[j])
        {
            platform++;
            i++;
        }
        if (arrival[i] == departure[j])
        {
            i++;
            j++;
        }
        ans = max(platform, ans);
    }
    while (i < m)
    {
        platform++;
        i++;
    }
    while (j < n)
    {
        platform--;
        j++;
    }
    return ans;
}
int main()
{
    system("cls");
    int arrival[] = { 200, 210, 300, 320, 350, 500 };
    int departure[] = { 230, 340, 320, 430, 400, 520 };
    int m = 2;
    int n = 2;
    cout << miniPlatforms(arrival, departure, m, n);
    return 0;
}