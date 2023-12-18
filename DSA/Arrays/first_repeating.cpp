#include <bits/stdc++.h>
using namespace std;
int firstRepeating(int arr[], int n)
{
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        int curElem = arr[i];
        count[curElem]++;
        if(count[curElem] > 1)
        {
            return curElem;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     int curElem = arr[i];
    //     if (count[curElem] > 1)
    //         return curElem;
    // }

    // for first non repeating
    //  for(int i = 0; i<n ; i++)
    //  {
    //      int curElem = arr[i];
    //      if(count[curElem] == 1)
    //      return curElem;
    //  }
    return 0;
}
int main()
{
    system("cls");
    int arr[] = {10, 5, 3, 4, 3, 5, 6};

    int n = 7;
    cout << firstRepeating(arr, n);
    return 0;
} 