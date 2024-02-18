#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max=findmax(arr,size);
	int min=findmin(arr,size);
	printf("Maximum element in array is %d\n",max);
	printf("Minimum element in array is %d\n",min);
	return 0;
}

