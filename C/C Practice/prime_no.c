#include <stdio.h>
int main()
{
    int n, i, t = 1;
    printf("Input Number \n");
    scanf("%d", &n);
    // for (i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         t = 0;
    //         break;
    //     }
    // }
    i = 2;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            t = 0;
            break;
        }
        i++;
    }
    if (t == 0 && n != 2)
        printf("Not a Prime Number");
    else
        printf("Prime Number");
    return 0;
}