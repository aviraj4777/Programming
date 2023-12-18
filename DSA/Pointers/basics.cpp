#include <bits/stdc++.h>
using namespace std;
void dummy(int *ptr, int n)
{
    cout << sizeof(ptr);
}
int main()
{
    system("cls");

    cout << "for single variable \n"
         << endl;
    int a = 5;
    int *p = &a;
    cout << a << endl;
    cout << &a << endl;
    // cout<<*a<<endl; //compile error a is not a pointer
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << "\n\n\n";

    // cout<<"for null pointer \n";
    // int *pt = 0;
    // cout<<pt<<endl;
    // cout<<&pt<<endl;
    // cout<<*pt<<endl;
    // cout<<"\n\n\n";

    cout << "for arrays \n";

    int arr[] = {1, 2, 3};
    cout << arr << endl;
    cout << &arr << endl;
    cout << *arr << endl;
    cout << arr[0] << endl;
    cout << &arr[0] << endl;

    cout << "\n\n\n";
    int array[] = {1, 2, 3, 4, 5};
    cout << *arr << endl;
    cout << *(array + 1) << endl;
    cout << *(array + 2) << endl;
    cout << *(array + 3) << endl;
    cout << *(array + 4) << endl;
    cout << *(array + 5) << endl; // it gives output same as arr[0].
    cout << *(array + 6) << endl; // it gives output same as arr[1] and so on.

    cout << "\n\n\n";

    int i = 0;
    cout << i[array] << endl; // i[arr] = *(i + arr)
    cout << i[array + 1] << endl;
    cout << i[array + 2] << endl;
    cout << i[array + 3] << endl;
    cout << i[array + 4] << endl;

    cout << "size of pointer : ";
    dummy(array, 5);

    cout << "\n\n\n";

    cout << "For character arrays : \n";
    char ch = 'a';
    char *ct = &ch;
    cout << ct << endl;
    cout << *ct << endl;

    cout << "\n\n\n";

    char charac[] = "abcde";
    char *ctr = charac;
    cout << *ctr << endl;
    cout << *charac << endl;
    cout << charac << endl;

    return 0;
}