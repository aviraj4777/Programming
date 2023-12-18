#include<stdio.h>
void point(int a);
int main() 
 {  int i = 4;
    printf("The address of i is %u \n" , &i);
    point(i);
 return 0 ; 
}
void point(int a){
    printf("The address of a inside the function is %u \n" , &a);
}