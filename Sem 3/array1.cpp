#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    int arr[100];
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;

    cout<<"Input Elements"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    cout<<"The sum of all elements is " << sum << endl;

    return 0;
}