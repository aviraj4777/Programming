#include <stdio.h>
int sum(int x);
int main()
{
    int n;
    printf("Input a no. \n");
    scanf("%d", &n);
    printf("The sum upto %d is %d \n", n, sum(n));
    return 0;
}
int sum(int x)
{
    if (x > 0)
    {
        int m = 0;
        m = x + sum(x - 1);
        return m;
    }
}