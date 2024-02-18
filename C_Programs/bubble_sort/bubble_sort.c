#include"bubble.h"
void printarray(int *ptr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
