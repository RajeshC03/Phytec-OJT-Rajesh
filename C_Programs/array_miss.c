#include<stdio.h>
int main()
{
	int n;
	int A[]={3,7,4,9,12,6,1,11,2,10};
	n=sizeof(A)/sizeof(A[0]);
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[j]>max)
				max=A[j];
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		H[A[i]]++;
	}
	for(int i=0;i<13;i++)
	{
		if(H[i]==0)
		{
			printf("Missing elements are %d\n",H[i]);
		}
	}
}

