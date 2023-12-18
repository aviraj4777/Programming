#include <bits/stdc++.h>
using namespace std;
void spiralPrint(int arr[4][4], int m, int n)
{
    int total = n * n;
    int start_row = 0, end_row = m - 1, start_col = 0, end_col = n - 1;
    while (total--)
    {
        for (int i = start_col; i <= end_col; i++)
        {
            cout << arr[start_row][i] << " ";
        }
        start_row++;
        for (int i = start_row; i <= end_row; i++)
        {
            cout << arr[i][end_col] << " ";
        }
        end_col--;
        for (int i = end_col; i >= start_col; i--)
        {
            cout << arr[end_row][i] << " ";
        }
        end_row--;
        for (int i = end_row; i >= start_row; i--)
        {
            cout << arr[i][start_col] << " ";
        }
        start_col++;
    }
}
void print(int arr[4][4], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
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
    // print(arr, m, n);
    spiralPrint(arr, m, n);
    return 0;
}