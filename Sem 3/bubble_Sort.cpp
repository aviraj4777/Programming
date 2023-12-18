#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr, int n)
{
    int i, j;
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }

            if (!swapped)
                break;
        }
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 3, 6, 7, 12, 8, 17};
    cout<<"Before Sorting: "<<endl;
    print(arr, 7);
    cout<<endl;
    cout<<"After Sorting :" <<endl;
    bubbleSort(arr, 7);
    print(arr, 7);
    return 0;
}