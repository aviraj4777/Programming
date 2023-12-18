#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    int i;
    printf("Enter the value of no. \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        printf("The factorial is 1");
    else
    {
        // for (i = n; i >= 1; i--) this code is for (for loop).
        // {
        //     fact = fact * i;}
        i = n;
        while (i >= 1)
        {
            fact = fact * i;
            i--;
        }
        printf("The factorial is %d", fact);
    }
    return 0;
}