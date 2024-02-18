#include<stdio.h>
int main()
{
	int *pc,c;
	c=222;
	printf("Address of c is:%p\n",&c);
	printf("Value of c is:%d\n",c);
	pc=&c;
	printf("Address of pointer pc is:%p\n",pc);
	printf("Value of pointer pc is:%d\n",*pc);
	return 0;
}


