#include<stdio.h>
int main()
{
	FILE *fp;
	char data[100];
	fp=fopen("file1","r");
	if(fp==NULL)
		printf("file not found");
	else
	{
		printf("file present and opened for reading\n");
		printf("current cursor position=%ld\n",ftell(fp));
		while(1)
		{
			fgets(data,sizeof(data),fp);
			if(feof(fp))
				break;
			else
				printf("%s",data);
			sleep(2);
		}
		printf("current cursor position=%ld\n",ftell(fp));
		while(1)
		{
			fgets(data,sizeof(data),fp);
			if(feof(fp))
				break;
			else
				printf("%s",data);
		}

		fclose(fp);
	}
}
