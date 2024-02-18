#include<stdio.h>
#include<stdio_ext.h>
#include"string_headers.h"
int main()

{
	int length1=0,length2=0,res=0;
	char data1[100];
	char data2[100];
	printf("Enter string one::\n");
	fgets(data1,100,stdin);
	__fpurge(stdin);
	printf("Enter string two::\n");
	fgets(data2,100,stdin);
	__fpurge(stdin);
	length1=mystring_len(data1);
	length2=mystring_len(data2);
	printf("\n");
	printf("\n");
	printf("Length of string:: %s is :: %d\n",data1,length1);
	printf("Length of string:: %s is :: %d\n",data2,length2);
	printf("\n");
	printf("\n");
	printf("Comparing strings::\n");
	res=mystring_comp(data1,data2);
	if(res==1)
		printf("Strings are same\n");
	else
		printf("Strings are not same");
	printf("\n");
	printf("\n");
	printf("To copy a string to another string\n");
	printf("Strings before copying\n");
	printf("%s\n",data1);
	printf("%s\n",data2);
	mystring_copy(data1,data2);
	printf("String after copying\n");
	printf("%s\n",data1);
	printf("%s\n",data2);
	printf("\n");
	printf("\n");

}
