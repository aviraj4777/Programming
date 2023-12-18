#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s)
{
    string temp = "";
    int i = 0;
    int j = s.length() - 1;

    // loop for reversing the string
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    // stl functio for reversing the string
    // reverse(s.begin(), s.end());
    cout << s << endl;

    string ans = "";

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            reverse(temp.begin(), temp.end());
            ans += temp;
            ans += " ";
            temp = "";
        }
        else
            temp += s[i];
    }
    return ans;
}
int main()
{
    system("cls");
    string str = "My name is Babbar";
    string ans = reverseWords(str);
    cout<<ans;
    return 0;
}