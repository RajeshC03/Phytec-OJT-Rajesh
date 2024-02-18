#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file1","r");
	if(fp==NULL)
	{
		printf("File Not Found!!!\n");
	}
	else
	{
		printf("File Found!!\n");
		fclose(fp);
	}
}

