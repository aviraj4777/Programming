#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    // int mid = (start+end)/2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int midElement = arr[mid];

        if (midElement == target)
        {
            return true;
        }

        if (target < midElement)
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        // mid = (start+end)/2;
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    system("cls");
    int arr[] = {2, 4, 6, 8, 9, 11, 23};
    int n = 7;
    int target = 23;

    //we can also use inbuilt binary search function 
    //binary_search(arr,arr+n,target)

    if (binarySearch(arr,n,target))   
    {
        cout << "Element Found" << endl;
    }

    else
    {
        cout << "Element Not found" << endl;
    }

    return 0;
}