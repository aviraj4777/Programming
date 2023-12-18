#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int a = 3, b = 4;
    printf("The value before wrong_swap is %d %d \n", a, b);
    wrong_swap(a, b);
    printf("The value after wrong_swap is %d %d \n", a, b);
    printf("The value before swap is %d %d \n", a , b);
    swap(&a,&b);
    printf("The value after swap is %d %d \n", a , b);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = a;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}