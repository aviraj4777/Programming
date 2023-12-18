#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
void sort012(int arr[], int n)
{
    int countzero = 0, countone = 0, counttwo = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countzero++;
        }
        else if (arr[i] == 1)
        {
            countone++;
        }
        else
        {
            counttwo++;
        }
    }
    int i = 0;
    while (countzero--)
    {
        arr[i] = 0;
        i++;
    }
    while (countone--)
    {
        arr[i] = 1;
        i++;
    }
    while (counttwo--)
    {
        arr[i] = 2;
        i++;
    }
}
int main()
{
    system("cls");
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr, n);
    print(arr, n);
    return 0;
}