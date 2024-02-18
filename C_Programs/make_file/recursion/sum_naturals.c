#include<stdio.h>

int sum(int n)
{
	if(n==0)
		return 1;
	else
		return (n*sum(n-1));
}

int main()
{
	int s=0;
	s=sum(5);
	printf("%d\n",s);
}
