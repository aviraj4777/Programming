#include<stdio.h>
int main() 
 {  int i = 45 ;
    int *ptr;
    int **ptrToptr;

    ptr = &i;
    ptrToptr = &ptr;
printf("The value of i is %d " , **ptrToptr);
 return 0 ; 
}