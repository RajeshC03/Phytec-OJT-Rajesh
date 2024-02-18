#include<stdio.h>
void evodd(void)
{
	int n;
	printf("Enter a number to check even or odd\n");
	scanf("%d",&n);
	if(n%2==0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");
}
