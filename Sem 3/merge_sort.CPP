#include <iostream>
using namespace std;
void merge(int arr[], int low, int high, int mid)
{
    int n1 = mid - low + 1; // size of temp array a
    int n2 = high - mid;    // size of temp array b
    int a[n1];              // temp array
    int b[n2];              // temp array

    for (int i = 0; i < n1; i++) // enter the value of a group
    {
        a[i] = arr[i + low];
    }
    for (int i = 0; i < n2; i++) // enter the value of a b group
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;   // pointer of a group
    int j = 0;   // pointer of b group     i
    int k = low; // treversing our main array
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);      // a group
        merge_sort(arr, mid + 1, high); // b group
        merge(arr, low, high, mid);
    }
}
int main()
{
    int a;
    cout << "Enter the size of array" << endl;
    cin >> a;
    int arr[a];
    cout << "Enter the element of arrays" << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, a - 1);
    cout << "Sorted array is" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " "; // to dislay my sorted array with a particular space
    }
    cout << endl;

    return 0;
}
