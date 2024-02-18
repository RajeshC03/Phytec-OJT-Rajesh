#include"sum.h"
int findsum(int arr[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

