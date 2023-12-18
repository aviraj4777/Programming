#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch (int *arr, int n, int target) {
    sort(arr, arr + n);
    int start = 0; 
    int end = n - 1;
    int mid = start + (end - start) / 2;
    bool flag = false;

    while (start <= end) {
        if (arr[mid] == target)
        {
            flag = true;
            break;
        }
        else if (target > arr[mid])
            start = mid + 1;

        else 
            end = mid - 1;

        mid = start + (end - start)/2;
    }
    return flag;
}
int main()
{
    system("cls");
    cout<<"\nIMPLEMENTING BINARY SEARCH \n\n";
    int n;
    int arr[100];
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;

    cout<<"Input Elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to search "<<endl;
    cin>>target;

    if(binarySearch(arr, n, target)) 
    {
        cout<<"Element found "<<endl;
    }
    else
        cout<<"Element not found"<<endl;

    return 0;
}