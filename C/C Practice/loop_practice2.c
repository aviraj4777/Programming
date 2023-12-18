#include <stdio.h>
int main()
{
   int sum = 0;
   int i = 1;
   while (i < 27)
   {
      sum = sum + i;
      i++;
   }
   printf("The sum of natural numbers is %d ", sum);

   return 0;
}