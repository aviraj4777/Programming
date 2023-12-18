#include <stdio.h>
int main()
{
    int length;
    int width;
    printf("Enter the length of the rectangle \n");
    scanf("%d", &length);
    printf("Enter the width of rectangle \n");
    scanf("%d", &width);
    printf("The area of rectangle is %d", length * width );
    return 0;
}