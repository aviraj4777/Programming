#include<stdio.h>
void value(int *n);
int main() 
 { int a ;
   printf("Enter the value of a \n" , a);
   scanf("%d" , &a);
   value(&a);
 return 0 ; 
}
void value(int *n){
    printf("Ten times of a is %u \n" , 10 * *n);
}