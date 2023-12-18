#include<stdio.h>
int main() 
 { int i = 8;
  printf("The address of the variable is %d \n" , &i);
 printf("The value at address is %d \n" , *(&i)); 
 return 0 ; 
}
