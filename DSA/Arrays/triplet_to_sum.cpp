#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void tripletToSum(int arr[], int n, int target)
{
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        int first = arr[i];
        int newtarget = target - first;
        int j = n - 1, k = i + 1;
        while(k<j)
        {
            if(arr[k] + arr[j] == newtarget)
            {
                cout<<arr[i]<<" "<<arr[k]<<" "<<arr[j]<<endl;
                k++;
                j--;
            }
            else if(arr[k] + arr[j] > newtarget)
            {
                j--;
            }
            else if(arr[k] + arr[j] < newtarget)
            {
                k++;
            }
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    system("cls");
    int arr[] = {3,2,5,4,1};
    int n = 5;
    int target = 9;

    sort(arr, arr + n);
    tripletToSum(arr, n, target);

    return 0;
}