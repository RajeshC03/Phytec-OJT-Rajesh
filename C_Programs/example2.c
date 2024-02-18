#include<stdio.h>
int main()
{
	char data;
	printf("enter the character\n");
	scanf("%c",&data);
	if(data>=65&&data<=90)
		printf("Character in lower case is: %c\n",data+32);
	else if(data>=97&&data<=122) 
		printf("Character in upper case is: %c\n",data-32);
	else
		printf("Invalid character\n");

	return 0;
}
