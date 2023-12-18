#include <iostream>
using namespace std;
void printfibonacci(int n)
{
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    for (int i = 1; i <= n - 2; i++)
    {
        int sum = first + second;
        cout << sum << " ";
        first = second;
        second = sum;
    }
}
int main()
{
    system("cls");
    cout << "Enter the value of n : " << endl;
    int n;
    cin >> n;
    printfibonacci(n);
    return 0;
}