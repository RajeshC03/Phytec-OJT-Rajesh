#include<stdio.h>
int main()
{
	char str[]="Hello World";
	char *p=str;
	int res=len(p);
	printf("Length of string is %d\n",res);
	return 0;
}

