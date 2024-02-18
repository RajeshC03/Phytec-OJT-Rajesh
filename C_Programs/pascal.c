#include<stdio.h>
int pascal(int n,int r)
{
	if(r==0||n==r)
	{
		return 1;
	}
	else
		return pascal(n-1,r-1)+pascal(n-1,r);
}
int main()
{
	int n,r;
	printf("Enter the values for n and r value\n");
	scanf("%d %d",&n,&r);
	int res=pascal(n,r);
	printf("%d\n",res);
	return 0;
}

