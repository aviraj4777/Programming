#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int s, int e, int k)
{
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    else
    {
        if(arr[mid] > k)
            return binarySearch(arr, s, mid - 1, k);

        else
            return binarySearch(arr, mid + 1, e, k);
    }
}
int main()
{
    system("cls");
    int arr[] = {2,4,6,10,14,16};
    int n = 6;
    int k = 4;

    if(binarySearch(arr, 0, n-1, k))
        cout<<"Element found"<<endl;

    else 
        cout<<"Element Not found"<<endl;
    
    return 0;
}