#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int sum=findsum(arr,size);
	printf("Sum of elements of array is %d\n",sum);
	return 0;
}

