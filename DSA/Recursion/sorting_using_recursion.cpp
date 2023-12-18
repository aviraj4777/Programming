#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int *arr, int n, int i)
{
    if (n == 0 || n == 1 || i == n)
    {
        return;
    }
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[minIndex] > arr[j])
            minIndex = j;
    }
    swap(arr[minIndex], arr[i]);

    selectionSort(arr, n, i + 1);
}
int main()
{
    system("cls");
    int arr[] = {64, 25, 12, 22, 11};
    // bubbleSort(arr, 5);
    selectionSort(arr, 5, 0);

    print(arr, 5);
    return 0;
}