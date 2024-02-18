#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int curpos;
	fp=fopen("file1","r");
	if(fp==NULL)
		printf("No file\n");
	else
	{
		fseek(fp,0,SEEK_END);
		while(1)
		{
			ch=fgetc(fp);
			printf("%c",ch);
			fseek(fp,-2,SEEK_CUR);
			curpos=ftell(fp);
			if(curpos==0)
			{
				ch=fgetc(fp);
				printf("%c",ch);
			}
			break;
		}
		fclose(fp);
	}
}

