#include <iostream>
using namespace std;
void printNos(int N)
{
    if (N > 0) {
        printNos(N-1);
        cout<<N<<" ";
    }
}
int main()
{
    system("cls");
    printNos(5);
    return 0;
}