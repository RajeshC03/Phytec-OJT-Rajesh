#include<stdio.h>
#include<string.h>
void splitwordsbycomma(char *inpstring)
{
	int length=strlen(inpstring);
	int i;
	for(i=0;i<length;i++)
	{
		if(inpstring[i]==' ')
			inpstring[i]=',';

	}
	printf("Split words:%s\n",inpstring);

}
int main()
{
	char inpstring[100];
	printf("Enter the string with spaces\n");
	gets(inpstring);
	splitwordsbycomma(inpstring);
	return 0;
}

