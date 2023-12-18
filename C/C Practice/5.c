#include <stdio.h>
int main()
{
    char ch;
    printf("Input a character \n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("It is a lowercase");
    }
    else
        printf("It is not a lowercase");
    return 0;
}