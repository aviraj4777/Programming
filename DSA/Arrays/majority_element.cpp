#include <bits/stdc++.h>
using namespace std;
bool checkMajority(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]] > n / 2)
            return true;
    }
    return false;
}
int main()
{
    system("cls");
    int arr[] = {4, 3, 5, 2, 4, 4, 2, 4, 4};
    int n = 9;
    if (checkMajority(arr, n))
    {
        cout << "Majority element present " << endl;
    }
    else
    {
        cout << "Not present " << endl;
    }
    return 0;
}