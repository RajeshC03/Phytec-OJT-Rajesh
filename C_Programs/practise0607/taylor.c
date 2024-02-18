#include<stdio.h>
int e(int x,int n)
{
	if(n==0)
		return 1;
	static int s=1;
	for(int i=1;i>0;i--)
	{
		s=(1+(x/n))*s;
	}
	return s;i
}
int main()
{
	float x=3,n=4;
	float res=e(x,n);
	printf("%f\n",res);
	return 0;
}

	
	
