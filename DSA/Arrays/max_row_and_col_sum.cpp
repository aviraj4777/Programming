#include <bits/stdc++.h>
using namespace std;
int maxColSum(int arr[3][3], int m, int n)
{
    int ans = INT_MIN;
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += arr[i][j];
        }
        //cout << sum << endl;
        ans = max(ans, sum);
    }
    return ans;
}
int maxRowSum(int arr[3][3], int m, int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        //cout << sum << endl;
        ans = max(ans, sum);
    }
    return ans;
}
void print(int arr[3][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    system("cls");
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m = 3;
    int n = 3;
    print(arr, m, n);
    cout<<"The maximum row wise sum is: "<<maxRowSum(arr, m, n);
    cout<<"\nThe maximum col wise sum is: "<<maxColSum(arr, m, n);
    return 0;
}