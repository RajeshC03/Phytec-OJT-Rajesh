#include<stdio.h>
int add(int x, int y)
{
	return x+y;
}
int main()
{
	int a,b,sum;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	sum=add(a,b);
	printf("Sum of %d and %d is=%d\n",a,b,sum);
	return 0;
}


