#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fsrc,*fdst;
	char ch;
	fsrc=fopen("file1","r");
	if(fsrc==NULL)
	{
		printf("File not found\n");
		printf("Copy Not Posiible!!!\n");
		exit(0);
	}
	else
	{
		fdst=fopen("file2","w");
		while(1)
		{
			ch=fgetc(fsrc);
			if(feof(fsrc))
				break;
			else
				fputc(ch,fdst);
		}
		fclose(fsrc);
		fclose(fdst);
	}
}

