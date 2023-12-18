#include <bits/stdc++.h>
using namespace std;
#define ll long long
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num, name;
        cin >> num >> name;
        string helper[10] = {"zer", "one", "two", "thr", "fou", "fiv", "six", "sev", "eig", "nin"};

        int n = num.length();
        int first = 0, cnt = 0, sum = 0;
        int decFlag = 0, valFlag = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            if (!isdigit(num[i]) && num[i] != '.')
            {
                valFlag = 0;
                break;
            }

            if (num[i] == '.')
                decFlag = 1;
            else if (num[i] != '0')
            {
                sum += (num[i] - '0');
                cnt = n - i;
                first = num[i] - '0';
            }
        }

        if (!valFlag)
        {
            cout << "Invalid" << endl;
            continue;
        }

        sum = sum - first;
        if (!decFlag)
            cnt = cnt - 1;

        while (sum > 9)
        {
            sum = getSum(sum);
        }

        while (cnt > 9)
        {
            cnt = getSum(cnt);
        }

        int start = (cnt & 1) ? 0 : 1;

        string redName = "@";
        n = name.length();

        for (int i = start; i < n; i += 2)
        {
            redName += name[i];
        }

        string res = helper[first] + '.' + helper[sum] + ((cnt == 0) ? "e" : ((decFlag) ? "e-" : "e+")) + helper[cnt] + redName;

        cout << res << endl;
    }
    return 0;
}