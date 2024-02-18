#include<stdio.h>
void printarray()
{
	int n,kn=5,sum=0,m;
	int a[12]={6,7,8,9,10,11,12,13,14,16,17};
	kn=kn*(kn+1)/2;
	int k=17;
	k=k*(k+1)/2;
	kn=k-kn;
	for(int i=0;i<12;i++)
	{
		sum=sum+a[i];
	}
	m=kn-sum;
	printf("The missing no is %d\n",m);
}
int main()
{
	printarray();
}



