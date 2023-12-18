#include <bits/stdc++.h>
using namespace std;
void wavePrint(int arr[4][4], int n, int m)
{
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < m; j++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
    {
      for (int j = m - 1; j >= 0; j--)
      {
        cout << arr[i][j] << " ";
      }
    }
    cout << endl;
  }
}
int main()
{
  system("cls");
  int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  int m = 4;
  int n = 4;
  wavePrint(arr, m, n);
  return 0;
}