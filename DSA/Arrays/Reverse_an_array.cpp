#include <iostream>
using namespace std;
void reverseArray(int arr[],int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }

}
void printArray(int arr[] , int size)
{
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    system("cls");
    int arr[100];
    int n;
    cout << "Enter number of elements :" << endl;
    cin >> n;
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr,0,n-1);
    cout<<"Printing reverse of Array"<<endl;
    printArray(arr,n);
    return 0;
}