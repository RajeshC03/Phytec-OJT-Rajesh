#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("file1","r");
	if(fp==NULL)
	{
		printf("file not found");
	}
	else
	{
		printf("file present and opened for reading\n");
		while(1)
		{
			ch=fgetc(fp);
			if(feof(fp))
				break;
			printf("%c",ch);
		}
		fclose(fp);
	}
}

