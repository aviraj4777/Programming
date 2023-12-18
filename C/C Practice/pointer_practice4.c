#include <stdio.h>
void SumAndAvg(int a, int b, int *sum, int *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int x, y, sum;
    float avg;
    printf("Enter the value of two no.s \n");
    scanf("%d %d", &x, &y);
    SumAndAvg(x, y, &sum, &avg);
    printf("The sum of two no. is %d \n" , sum);
    printf("The avg of two no. is %f \n", avg);
    return 0;
}
