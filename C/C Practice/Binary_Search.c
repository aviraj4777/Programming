#include <stdio.h>
int main()
{
    int first, last, n, x, mid, a[100];
    printf("Input no. of elements in array \n");
    scanf("%d", &n);
    printf("Input Elements of array in sorted form. \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input search element \n");
    scanf("%d", &x);
    first = 0;
    last = n - 1;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (a[mid] < x)
            first = mid + 1;
        else if (a[mid] == x)
        {
            printf("Element found at location %d", (mid + 1));
        }
        else
            last = mid - 1;
    }
    if (first > last)
        printf("Not Found!");
    return 0;
}