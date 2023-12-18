#include <stdio.h>
void main()
{

    int a[50], b[50], n1, n2, i, x;

    scanf("%d", &n1); // Number of enements in 1st array

    for (i = 0; i < n1; i++)

    {
        scanf("%d", &a[i]); // Elements of the 1st array is entered from test case
    }
    scanf("%d", &n2); // Number of enements in 2nd  array

    for (i = 0; i < n2; i++)

    {
        scanf("%d", &b[i]); // Elements of the 2nd array is entered from test case​
    }
    for (x = 0; x < n1; x++)

    {

        for (i = 0; i < n2; i++)

        {

            if (b[i] == a[x])

            {

                b[i] = 0;
            }
        }
    }

    for (i = 0; i < n1; i++)

    {

        printf("%d", a[i]);
        printf(" ");
    }

    for (i = 0; i < n2; i++)

    {

        if (b[i] == 0)

            continue;

        else

            printf("%d ", b[i]);
            
    }

}