#include"mini.h"
int findmax(int arr[], int size)
{
	int max=arr[0];
	int i;
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int findmin(int arr[], int size)
{
	int min=arr[0];
	int i;
	for(i=1;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
