#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n)
{
    if (n == 0)
        return 0;

    int maxi = max(arr[0], getMax(arr + 1, n - 1));
    return maxi;
}
int main()
{
    system("cls");
    int arr[] = {4,2,6,18,1,0,12};
    int n = 7;

    cout<<getMax(arr, n);

    return 0;
}