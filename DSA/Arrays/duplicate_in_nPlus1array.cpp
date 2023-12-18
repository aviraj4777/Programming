#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int sum1 = 0;
    for (int i = 0; i <= n; i++)
    {
        sum1 += arr[i];
    }
    return sum1;
}
int main()
{
    system("cls");
    int arr[100];
    int n;
    cin >> n;
    
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    int sum2 = n * (n + 1) / 2;
    int ans = (sum(arr, n)) - sum2;
    cout << ans << endl;
    return 0;
}