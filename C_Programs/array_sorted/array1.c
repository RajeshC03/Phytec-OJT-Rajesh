#include<stdio.h>
#include<stdbool.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	bool sorted=isSorted(arr,size);
	if(sorted)
	{
		printf("Array is Sorted");
	}
	else
		printf("Array is not sorted");
	return 0;
}

