#include <bits/stdc++.h>
using namespace std;
char flip(char expected)
{
    if (expected == '0')
    {
        return '1';
    }
    else
        return '0';
}
int getFlips(string str, char expected)
{
    int cntFlip = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != expected)
            cntFlip++;
        expected = flip(expected);
    }
    return cntFlip;
}
int main()
{
    system("cls");
    string str = "0001010111";
    int withZero = getFlips(str, '0');
    int withOne = getFlips(str, '1');
    cout<<"Minimum no. of flips require is : "<<min(withOne,withZero);
    return 0;
}