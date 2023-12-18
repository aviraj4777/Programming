#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    // create left and right parts
    int *left = new int[leftLength];
    int *right = new int[rightLength];

    // copy into left array
    int originalIndex = s;
    for (int i = 0; i < leftLength; i++)
    {
        left[i] = arr[originalIndex++];
    }

    // copy into right array
    for (int i = 0; i < rightLength; i++)
    {
        right[i] = arr[originalIndex++];
    }

    // Now we have two sorted arrays, we have to merge them
    int leftIndex = 0;
    int rightIndex = 0;
    originalIndex = s;

    while (leftIndex < leftLength && rightIndex < rightLength)
    {
        if (left[leftIndex] <= right[rightIndex])
        {
            arr[originalIndex++] = left[leftIndex++];
        }
        else
        {
            arr[originalIndex++] = right[rightIndex++];
        }
    }
    while (leftIndex < leftLength)
        arr[originalIndex++] = left[leftIndex++];

    while (rightIndex < rightLength)
        arr[originalIndex++] = right[rightIndex++];
}
void mergeSort(int arr[], int s, int e)
{
    while (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    system("cls");
    int arr[] = {12, 11, 9, 6, 7, 5, 2, 3};
    int n = 8;
    mergeSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
