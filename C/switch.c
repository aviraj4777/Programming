#include <stdio.h>
int main()
{
    int rating;
    printf("Enter your rating");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("*");
        break;
    case 2:
        printf("**");
        break;
    case 3:
        printf("***");
        break;
    case 4:
        printf("****");
        break;
    case 5:
        printf("*****");
        break;
    default:
        printf("Invalid Rating!");
        break;
    }
    return 0;
}
