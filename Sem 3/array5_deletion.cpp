#include <iostream>
using namespace std;

void deletion(int *arr, int pos, int &n)
{
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
}

int main()
{
    system("cls");
    int n, pos, key, value;
    cout << "Enter the size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position of element to delete " << endl;
    cin >> pos;

    deletion(arr, pos, n);

    cout << "Priinting after deletion " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10];
//     int n, k, i, item, position;
//     bool flag = 0;

//     cout << "Enter the size of array ";
//     cin >> n;
//     cout << "Enter the elements of the array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int choice;
//     cout << "Enter your choice ";
//     cin >>
//         choice;

//     switch (choice)
//     {
//     case 1: // 1. Insert a new element at end as well as a ta given position.

//         cout << "Enter the index where element has to be inserted ";
//         cin >> k;
//         i = n - 1;
//         while (i >= k)
//         {
//             arr[i + 1] = arr[i];
//             i--;
//         }
//         n++;
//         cout << "Enter the element you want to insert ";
//         cin >> item;
//         arr[k] = item;
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         break;
//     case 2: // Delete an element from a given whose value is given or whose position is given.

//         cout << "Enter the index of the element you want to delete ";

//         cin >> position;
//         for (int i = position; i < n; i++)
//         {
//             arr[i] = arr[i + 1];
//         }
//         n--;
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         break;
//     case 3:
//         cout << "Enter the element you want to check ";
//         cin >> item;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == item)
//             {
//                 position = i;
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             cout << "The index at which the element is present is " << position;
//         }
//         else
//         {
//             cout << "The element is not present in the array";
//         }
//         break;
//     case 4: // To display the elements of a linear array
//         cout << "The elements are ";
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         break;
//     default:
//         cout << "The choice chosen is different from question ";
//     }
//     return 0;
// }