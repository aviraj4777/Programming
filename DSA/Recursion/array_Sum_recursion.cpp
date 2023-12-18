#include <bits/stdc++.h>
using namespace std;
int arraySum(int arr[], int n)
{
    if (n == 0)
        return 0;

    int sum = 0;
    sum = arr[0] + arraySum(arr + 1, n - 1);
    return sum;
}
int main()
{
    system("cls");
    int arr[] = {2, 4, 6, 9, 11, 13};
    int n = 6;

    cout<<arraySum(arr, n);
    
    return 0;
}