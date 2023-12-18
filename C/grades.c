#include<stdio.h>
int main() 
 { 
     int m;
     printf("Input mark of a subject \n");
     scanf("%d", &m);
     if (m>90 && m<=100)
     printf("A Grade");
     else if (m>80 && m<=90)
     printf("B Grade");
     else if (m>70 && m<=80)
     printf("C Grade");
     else if (m>60 && m<=70)
     printf("D Grade");
     else 
     printf("Fail");
 return 0 ; 
}