#include <bits/stdc++.h>
using namespace std;
void reverse(string& str, int i)
{
    int n = str.length() - i - 1;
    if (i > n)
        return;
    
    swap(str[i], str[n]);
    i++;
    //j--;
    reverse(str, i);
}
int main()
{
    system("cls");
    string str = "abcdef";
    //reverse(str, 0, str.length() - 1);  two pointer
    reverse(str, 0);
    cout<<str;
    return 0;
}