#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int m, int n)
{
    int j = n - 1, i = m + 1;
    while(i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    system("cls");
    vector<int> arr = {1,2,3,4,5,6};
    int m = 3;
    int n = 6;
    //reverseArray(arr, m, n);
    cout<<arr.size()<<endl;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    return 0;
}