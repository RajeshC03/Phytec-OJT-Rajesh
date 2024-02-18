#include<stdio.h>
int main()
{
	int i,n1=1,n2=100;
	for( i=n1;i<=n2;i++)
	{
		if(i%2==0&&i%3==0)
			printf("%d\t",i);
	}
	printf("\n");	
	return 0;
}
