#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    char ch;
    cin>>str;
    cin>>ch;

    vector<int> indices;
    for (int i = 0; i < str.length(); i++) {
        if (ch == str[i]) {
            indices.push_back(i);
        }
    }
    for (int i = 0; i < indices.size(); i++) {
        cout<<indices[i] <<" ";
    }
    return 0;
}