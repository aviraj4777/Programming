#include <iostream>
using namespace std;
void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    cout<<"\nSangam Kumar"<<endl<<"UID: 21BCS10982"<<endl<<endl;
    int arr[] = {12,14,8,18,10,7,1};
    cout<<"Before Sorting: "<<endl;
    print(arr, 7);
    cout<<endl;
    insertionSort(arr, 7);
    cout<<"\nAfter Sorting: "<<endl;
    print(arr, 7);
    return 0;
}