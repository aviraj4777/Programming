#include <iostream>
#include <utility>
using namespace std;

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int minm = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minm])
                minm = j;
        }
        swap(arr[i], arr[minm]);
    }
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
    int arr[] = {12, 18, 15, 13, 19, 20};
    selectionSort(arr, 6);
    print(arr, 6);
    return 0;
}