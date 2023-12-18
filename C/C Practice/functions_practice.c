#include <stdio.h>
int average(int a, int b, int c);
int main()
{
    int x, y, z;
    printf("Input three numbers \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("The average of three numbers is %d ", average(x, y, z));
    return 0;
}
int average(int a, int b, int c)
{
    int sum = (a + b + c) / 3;
    return sum;
}