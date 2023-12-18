#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    unordered_set<int> st;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 4 == 0 || i % 7 == 0 || i % 47 == 0 || i % 74 == 0)
        {
            st.insert(i);
        }
        else if (i % 444 == 0 || i % 777 == 0 || i % 474 == 0 || i % 774 == 0 || i % 447 == 0 || i % 477 == 0 || i % 744 == 0 || i % 747 == 0)
        {
            st.insert(i);
        }
    }
    if (st.count(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}