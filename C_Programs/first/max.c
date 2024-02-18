#include<stdio.h>
void max(void)
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("a = %d is greater\n",a);
	else
		printf("b = %d is greater\n",b);
}
