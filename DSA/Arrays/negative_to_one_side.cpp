#include <bits/stdc++.h>
using namespace std;
void negativeToOneSide(int arr[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}


void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    system("cls");
    int arr[] = {3,-1,2,-4,-6,-4,5};
    int n = 7;
    negativeToOneSide(arr, n);
    print(arr, n);
    return 0;
}