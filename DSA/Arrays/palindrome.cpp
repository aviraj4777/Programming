#include <bits/stdc++.h>
using namespace std;
void palindrome(int arr[], int n)
{
    int t = 1;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            t = 0;
            break;
        }
    }
    if(t == 1)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5;
    palindrome(arr, n);
    return 0;
}