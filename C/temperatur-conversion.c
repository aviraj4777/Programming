#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature in celsius \n");
    scanf("%d" , &temp);
    printf("The temperature in kelvin %d \n" , 273 + temp );
    return 0;
}