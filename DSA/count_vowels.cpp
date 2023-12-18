#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string str = "educAtion";
    int countVowels = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        //for lowercase vowels
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            countVowels++;
        }
        // for upper case vowels
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            countVowels++;
        }

    }
    cout<<"No. of vowels in string = "<<countVowels<<endl;
    return 0;
}