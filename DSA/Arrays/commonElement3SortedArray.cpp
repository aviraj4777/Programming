#include <bits/stdc++.h>
using namespace std;
void commonElement(int arr1[], int arr2[], int arr3[], int m, int n, int o)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n && k < o)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
        }
        else if (arr3[k] > arr2[j])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}
int main()
{
    system("cls");
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    cout << "Common Elements are ";
    commonElement(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}