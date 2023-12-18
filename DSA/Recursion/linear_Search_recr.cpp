#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[], int n, int k)
{
    if (n == 0)
        return false;

    if (arr[0] == k)
        return true;

    else
    {
        bool ans = linearSearch(arr + 1, n - 1, k); 
        return ans;
    }
}
int main()
{
    system("cls");
    int arr[] = {3, 5, 1, 2, 6};
    int n = 5;
    int k = 8;
    if (linearSearch(arr, n, k))
    {
        cout << "Found" << endl;
    }
    else
        cout << "Not found" << endl;
    return 0;
}