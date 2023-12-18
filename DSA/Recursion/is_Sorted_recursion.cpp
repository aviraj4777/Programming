#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    else
    {
        bool ans = isSorted(arr + 1, n - 1);
        return ans;
    }
}
int main()
{
    system("cls");
    int arr[] = {2,4,6,9,11,13};
    int n = 6;

    if(isSorted(arr, n))
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not sorted"<<endl;
    }
    return 0;
}