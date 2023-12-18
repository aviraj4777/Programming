#include<stdio.h>
int main() 
 { int a =8;
   int i=1 ;
   int sum=0;
   do {
       sum = sum + (a*i);
       i++;
   } while (i<=10);
   printf("The sum is %d" , sum);
 return 0 ; 
}