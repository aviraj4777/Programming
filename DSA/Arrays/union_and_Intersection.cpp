#include <bits/stdc++.h>
using namespace std;
void Union(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (arr1[i] < arr2[j])
    {
      cout << arr1[i] << " ";
      i++;
    }
    if (arr1[i] > arr2[j])
    {
      cout << arr2[j] << " ";
      j++;
    }
    if (arr1[i] == arr2[j])
    {
      cout << arr1[i] << " ";
      i++;
      j++;
    }
  }

  while (i < m)
  {
    cout << arr1[i] << " ";
    i++;
  }
  while (j < n)
  {
    cout << arr2[j] << " ";
    j++;
  }
}
void Intersection(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if(arr1[i]<arr2[j])
    {
      i++;
    }
    if(arr1[i]>arr2[j])
    {
      j++;
    }
    if(arr1[i]== arr2[j])
    {
      cout<<arr1[i]<<" ";
      i++;
      j++;
    }    
  }
}
int main()
{
  system("cls");
  int arr1[] = {1, 3, 4, 5, 7};
  int arr2[] = {2, 3, 5, 6};
  int m = 5;
  int n = 4;
  cout << "The Union of two sorted array is : ";
  Union(arr1, arr2, m, n);
  cout << "\nThe Intersection of two sorted array is : ";
  Intersection(arr1,arr2,m,n);
  return 0;
}