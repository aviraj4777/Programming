#include <stdio.h>
int main()
{
    int i, n, t = 1;
    printf("Input any number \n ");
    scanf("%d", &n);
    i = 2;
    do
    {
        if (n % i == 0)
        {
            t = 0;
            break;
        }
        i++;
    } while (i <= n / 2);
    if (t == 0 && n != 2)
        printf("Not a Prime Number");
    else
        printf("prime Number");
    return 0;
}