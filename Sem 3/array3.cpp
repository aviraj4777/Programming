#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    
    int arr[100];
    int evensum = 0, oddsum = 0;
    cout<<"Input the elements of array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) 
            evensum += arr[i - 1];

        else 
            oddsum += arr[i - 1]; 
    }

    cout<<"The sum at even index is: "<<evensum<<endl;
    cout<<"The sum at odd index is: "<<oddsum<<endl;
    return 0;
}