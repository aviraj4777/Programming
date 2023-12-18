#include<stdio.h>
void pattern(int x);
int main()
{
    int n;
    printf("Input the value of n \n");
    scanf("%d", &n);
    printf("The required pattern upto %d lines is \n", n);
    pattern(n);
    return 0;
}
void pattern(int x)
{
    if (x == 1)
    {
        printf("*\n");
        return;
    }
    pattern(x - 1);
    for (int i = 0; i < (2 * x - 1); i++)
    {
        printf("* ");
    }
    printf("\n");
}