#include<stdio.h>

int main()
{
	int n,min,max;
	int *ptr;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("\n");
	int array[n];
	printf("Enter the array the elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("Array elemnts are\n");
	ptr=array;//ptr=&array[0];
	min=max=*ptr;
	for(int i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("\n");
	for(int i=1;i<n;i++)
	{
		if(*(ptr+i)>max)
			max=*(ptr+i);
		if(*(ptr+i)<min)
			min=*(ptr+i);
	}
	printf("maximum is ::%d\n",max);
	printf("minimum is ::%d\n",min);
	return 0;

}
