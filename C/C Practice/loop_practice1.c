#include<stdio.h>
int main() 
 { 
     int n;
     int m;
     printf("Enter the no. for table \n");
     scanf("%d" , &n) ;
     for(int i=1;i<=10;i++){
         printf("(%d) * (%d) = (%d) \n" , n , i , m=n*i);
     }
 return 0 ; 
}