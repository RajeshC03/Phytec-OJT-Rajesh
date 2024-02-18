#include<stdio.h>
int main()
{
	FILE *fp;
	char data[80]="C programming";
	fp=fopen("file1","a");
	if(fp==NULL)
	{
		printf("File Not Found");
	}
	else
	{
		printf("file present and opened");
		fputc('\n',fp);
		fputs(data,fp);
		fclose(fp);
	}
}
