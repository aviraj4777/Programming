#include <bits/stdc++.h>
using namespace std;
bool checkSubset(int a[], int n, int b[], int m)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        freq[b[i]]--;
        if (freq[b[i]] < 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    system("cls");
    int arr1[] = {1,3,5,7,9,10,15};
    int n = 7;
    int arr2[] = {3,5,9};
    int m = 3;
    if(checkSubset(arr1,n,arr2,m))
    {
        cout<<"arr2 is subset of arr1 "<<endl;
    }
    else
    {
        cout<<"arr2 is not a subset of arr1 "<<endl;
    }
    return 0;
}