#include <bits/stdc++.h>
using namespace std;
int* funcArrange(int n, int arr[]) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    return arr;
}
int main()
{
    system("cls");
    int n = 8;
    int arr[] = {10, 98, 3, 33, 12, 22, 21, 11};
    int *res = funcArrange(n, arr);
    for (int i = 0; i < n; i++) {
        cout<<res[i]<<" ";
    }
    return 0;
}