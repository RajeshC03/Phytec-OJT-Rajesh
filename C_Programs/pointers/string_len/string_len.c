#include<stdio.h>

int main()
{
	int len=0;
	char data[100];
	char *data_ptr;
	printf("Enter the string\n");
	gets(data);
	printf("\n");
	printf("\n");
	printf("Entered string is::\n");
	puts(data);
	printf("\n");
	printf("\n");
	data_ptr=data;//&data[0]
	for(int i=0;*(data_ptr+i)!='\0';i++)
		len++;
	printf("Length of the string is::%d\n",len);
	return 0;
}
