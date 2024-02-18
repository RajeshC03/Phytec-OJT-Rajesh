#include"string.h"
void rev_string(char s[])
{
	
	int len=0;
	for(int i=0;s[i]!='\0';i++)
		len++;
	printf("\n");
	printf("String length is::");
	printf("%d",len);
	printf("\n");	
	char temp;
	for(int i=0,j=len-1;i<len/2;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("reversed string is\n");
	puts(s);
}
