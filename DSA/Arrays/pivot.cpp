#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;

    while(s <= e)
    {
        if(mid < e && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if(mid > 0 && arr[mid] < arr[mid - 1])
        {
            return mid-1;
        }
        else if(arr[s] >= arr[mid])
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}
int main()
{
    system("cls");
    int arr[] = {3,4,5,6,1,2};
    int n = 6;
    cout<<pivot(arr,n);
    return 0;
}