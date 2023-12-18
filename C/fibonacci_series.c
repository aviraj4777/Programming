// #include <stdio.h>
// void fibonacci(int x);
// int main()
// {
//     int n;
//     printf("Input the no. of terms \n");
//     scanf("%d", &n);
//     printf("The fibonacci series upto n is  \n");
//     fibonacci(n);
//     return 0;
// }
// void fibonacci(int x)
// {
//     int a = 0, b = 1;
//     for (int i = 0; i < x; i++)
//     {
//         int result = a + b;
//         printf("%d ", a);
//         a = b;
//         b = result;
//     }
// }
#include <stdio.h>

int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }
	
   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

   int i;
	
   for (i = 0; i < 10; i++) {
      printf("%d\t\n", fibonacci(i));
   }
	
   return 0;
}