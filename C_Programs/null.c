#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	//ptr=(int*)malloc(2*sizeof(int));
	if(ptr==NULL)
		printf("Memory is not allocated\n");
	else
		printf("Memory allocated\n");
return 0;
}

