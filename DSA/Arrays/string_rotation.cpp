// check whether strings are rotation of each other or not
#include <bits/stdc++.h>
using namespace std;
bool func(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    string temp = a + a;
    return(temp.find(b) != string::npos);
}
int main()
{
    system("cls");
    string str1 = "bbarba";
    string str2 = "babbar";
    if(func(str1, str2))
    {
        cout<<"Yes the string is rotation of each other";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}