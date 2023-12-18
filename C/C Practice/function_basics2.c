// Functions inside function.
#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();
    return 0;
}
void goodmorning()
{
    printf("Good Morning \n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Good Afternoon\n");
    goodnight();
}
void goodnight()
{
    printf("Good Night \n");
}