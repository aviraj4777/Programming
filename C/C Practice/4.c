#include<stdio.h>
int main() 
 { int year;
 printf("Input year \n");
 scanf("%d" , &year);
 if (year%4 == 0)
 printf("It is a leap year");
 else if (year%400 == 0)
 printf("It is a leap year");
 else 
 printf("It is not a leap year"); 
 return 0 ; 
}