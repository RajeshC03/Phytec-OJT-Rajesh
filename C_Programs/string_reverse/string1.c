#include<stdio.h>
int main()
{
	char data[100];
	printf("Enter a string\n");
	gets(data);
	printf("\n");
	printf("Entered string is\n");
	puts(data);
	rev_string(data);
	printf("\n");
}
