#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str, int i)
{
    int n = str.length() - i - 1;

    if (str[i] != str[n])
        return false;
    else
    {
        i++;
        checkPalindrome(str, i);
        return true;
    }
}
int main()
{
    system("cls");
    string str = "abcdcba";
    if(checkPalindrome(str, 0))
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}  