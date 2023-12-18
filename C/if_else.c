#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of a person \n");
    scanf("%d", &age);
    if (age>=90 || age<18)
        printf("The person cannot drive");
    else
        printf("The person can drive");

    return 0;
}