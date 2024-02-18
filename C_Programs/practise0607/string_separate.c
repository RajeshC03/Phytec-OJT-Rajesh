#include<stdio.h>
void display_spaces(const char *str)
{
	char space[]=" ";
	char *token=strtok(str,space);
	while(token!=NULL){
		printf("%s",token);
		token=strtok(NULL,space);
		if(token!=NULL)
			printf(" ");
	}
}
int main()
{
	char str[100];
	printf("Enter a string");
	fgets(str,sizeof(str),stdin);
	printf("spaces between each word: ");
	display_spaces(str);
	return 0;
}

