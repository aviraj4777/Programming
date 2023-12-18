#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    system("cls");
    int arr1[] = {7, 5, 4, 2};
    int n1 = 4;
    int arr2[] = {-2, 45, 0, 11, -9};
    int n2 = 5;
    int arr3[] = {10, 1, 7, 4, 8, 2};
    int n3 = 6;

    cout << "Selection Sort: \n";
    selectionSort(arr1, n1);
    print(arr1, n1);

    cout<<"Bubble sort: \n";
    bubbleSort(arr2, n2);
    print(arr2, n2);

    cout<<"Insertion Sort: \n";
    insertionSort(arr3, n3);
    print(arr3, n3);

    return 0;
}