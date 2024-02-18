#include"div.h"
void divby23(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(i%2==0||i%3==0)
		{
			printf("The numbers which are divisible by 2 and 3 are:%d\n",i);
		}
	}
}

