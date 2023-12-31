#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part sambhal lete hai
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    // recursive call
    quickSort(arr, s, p - 1); // left part
    quickSort(arr, p + 1, e); // right part
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
    quickSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}