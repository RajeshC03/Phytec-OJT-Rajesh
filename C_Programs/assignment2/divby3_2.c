#include<stdio.h>
int main()
{

	for(int i=1;i<=100;i++)
	{
		if(i%2==0||i%3==0)
		{
			printf("The numbers which are divisible by 2 and 3 are:%d\n",i);
		}
	}
}
			
