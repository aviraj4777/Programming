#include <bits/stdc++.h>
using namespace std;
bool checkAnagram(string a, string b)
{
    int freq[26] = {0};
    // increment for string a
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        int index = ch - 'a';
        freq[index]++;
    }
    // decrement for string b
    for (int i = 0; i < b.length(); i++)
    {
        char ch = a[i];
        int index = ch - 'a';
        freq[index]--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    system("cls");
    string str1 = "aviraj";
    string str2 = "ajay";
    if (checkAnagram(str1, str2))
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not anagram";
    }
    return 0;
}