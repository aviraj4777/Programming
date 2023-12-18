#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    // unordered_map<int, int> m1;

    // for(auto i:m)
    // {
    //     m1[i.second]++;
    // }

    // if(m.size() == m1.size())
    // {
    // return true;
    // }

    // return false;

    unordered_set<int> s;
    for (auto &p : m)
    {
        if (!s.insert(p.second).second)
            return false;
    }
    return true;
}

int main()
{
    system("cls");
    vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    cout << uniqueOccurrences(arr);
    return 0;
}