#include<stdio.h>
int main()
{
    int principal , time , rate;
    printf("Enter principal amount , time , rate \n");
    scanf("%d%d%d", &principal , &time , &rate);
    int si = principal * time * rate /100;
    printf("The simple interest is %d" , si);
    return 0;

}