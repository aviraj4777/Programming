#include <stdio.h>
int main()
{
    int i, n, x, k, a[100];
    printf("Input no. of elements. \n");
    scanf("%d", &n);
    printf("Input array elements. \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input search element. \n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            k = 1;
            break;
        }
    }
    if (k == 1)
        printf("Element Found");
    else
        printf("Not found");
    return 0;
}