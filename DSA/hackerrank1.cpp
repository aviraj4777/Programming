#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N < 2 || N > 30)
    {
        cout << "Invalid Input";
        return 0;
    }
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int j = 0;
    int result[N];
    int last = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] == last)
        {
            if (i == N - 1)
                result[j++] = last;
            continue;
        }
        else
            result[j++] = last;
        last = arr[i];
    }

    for (int i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}