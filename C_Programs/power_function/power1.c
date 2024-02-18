#include<stdio.h>
int main()
{
	int base,a,res;
	printf("Enter base and power\n");
	scanf("%d %d",&base,&a);
	res=power(base,a);
	printf("%d %d = %d",base,a,res);
	return 0;
}
