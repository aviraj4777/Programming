#include <bits/stdc++.h>
using namespace std;
int getlength(char *ptr)
{
    int length = 0;
    int index = 0;
    while (*(ptr + index) != '\0')
    {
        length++;
        index++;
    }
    return length;
}

void reverse(char arr[], int n)
{
    int s = 0, e = n - 1; 
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main()
{
    system("cls");
    char a = 'a';
    char arr[] = "abcdef";
    cout << a << endl
         << arr << endl;
    //   char array[10];
    //   cin>>array;
    //   cout<<"\n"<<array;
    int n = getlength(arr);
    cout << "The length of the array is : " << n;
    reverse(arr, n);
    cout<<"\nThe reverse of an array is : " <<arr;
    cout<<"\n\n";
    string str;
    getline(cin, str);
    cout<<str;
    return 0;
}