#include<stdio.h>
using namespace std;
int main() 
 { int i , j , k , l;
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {printf("* ");}
        printf("\n");
    }
      for(k=1;k<=5;k++)
      {
          for(l=0;l<k;l++)
          {printf("* ");}
          printf("\n");
      }
 return 0 ; 
}