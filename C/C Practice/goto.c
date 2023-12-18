#include <stdio.h>

int main()
{
	int counter=1;
	int n;
	
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	
	START :
	printf("%d ",counter);
	counter++; 
	
	if(counter<=n)
		goto START;
	
	return 0;
}