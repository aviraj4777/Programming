#include <iostream>
using namespace std;
int main()
{
    system("cls");
    char c;
    cout<<"Enter a character "<<endl;
    cin>>c;
    // if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    // {
    //     cout<<"This character is a vowel"<<endl;
    // }
    // else
    // {
    //     cout<<"This is a consonant"<<endl;
    // }
    switch(c)
    {
        case 'a':
            cout<<"This is a vowel"<<endl;
            break;
        case 'e':
            cout<<"This is a vowel"<<endl;
            break;
        case 'i':
            cout<<"This is a vowel"<<endl;
            break;
        case 'o':
            cout<<"This is a vowel"<<endl;
            break;
        case 'u':
            cout<<"This is a vowel"<<endl;
            break;
        case 'A':
            cout<<"This is a vowel"<<endl;
            break;
        case 'E':
            cout<<"This is a vowel"<<endl;
            break;
        case 'I':
            cout<<"This is a vowel"<<endl;
            break;
        case 'O':
            cout<<"This is a vowel"<<endl;
            break;
        case 'U':
            cout<<"This is a vowel"<<endl;
            break;
        default:
            cout<<"This is a consonant"<<endl;
    }
    return 0;
}