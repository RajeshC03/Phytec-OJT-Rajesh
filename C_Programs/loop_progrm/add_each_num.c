#include<stdio.h>
int  main()
{
	int n;
	printf("Enter the number to add 2 to it's each digit\n");
	scanf("%d",&n);
	int result=add_each_digit(n);
	printf("The final number is %d\n",result);
return 0;
}
int add_each_digit(int n)
{
	int sum=0,rev=0;
	while(n>0)
	{
		int r=n%10;
		sum=sum*10+2+r;
		int n=n/10;
	}
	while(sum>0)
	{
		int x=sum%10;
		rev=rev*10+x;
		int sum=sum/10;
	}
	return rev;
}
