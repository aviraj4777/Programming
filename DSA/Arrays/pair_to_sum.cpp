#include <bits/stdc++.h>
using namespace std;
void pairToSum(int arr[], int n, int target)
{
  int i = 0, j = n - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == target)
    {
      cout << arr[i] << " " << arr[j] << endl;
      i++;
      j--;
    }
    else if (arr[i] + arr[j] > target)
    {
      j--;
    }
    else if (arr[i] + arr[j] < target)
    {
      i++;
    }
  }
}

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}
int main()
{
  system("cls");
  int arr[]={3,1,4,5,9,13,11};
  int n = 7;
  int target = 14;

  sort(arr, arr + n);
  pairToSum(arr, n, target);

  return 0;
}  