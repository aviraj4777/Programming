#include <iostream>
using namespace std;
pair<int, int> ans(int x, int y)
{
    return make_pair(x, y);
}
pair<int,int> getMaxandMin(int arr[], int n)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    pair<int, int> p = ans(maxi,mini);
    return p; 
}
int main()
{
    system("cls");
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int,int> ans = getMaxandMin(arr, n);
    
    cout<<"The maximum number in array is: "<<ans.first<<"\n";
    cout<<"The minimum number in array is: "<<ans.second<<"\n";

    return 0;
}