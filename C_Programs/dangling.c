#include<stdio.h>
int *(fun)()
{
	int num=10;
	return num;
}

*(funptr)();
int main()
{
	 *(funptr)()=&fun;
	
	
	int *ptr=NULL;
	ptr=&fun;
	printf("%d",*(funptr)());
	return 0;
}

