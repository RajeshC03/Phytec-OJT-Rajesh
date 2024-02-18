#include<stdio.h>
int main()
{
	int num;
	int factofnum;
	printf("Enter the number\n");
	scanf("%d",&num);
	factofnum=fact(num);
	printf("%d",factofnum);
	return 0;
}

