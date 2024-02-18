#include<stdio.h>
void perms(char s[],int k)
{
	static char res[10];
	static int a[10];
	if(s[k]=='\0')
	{
		res[k]='\0';
		printf("%s\n",res);
	
		return;
	}
	for(int i=0;s[i]!='\0';i++)
	{
		if(a[i]==0)
		{
			res[k]=s[i];
			a[i]=1;
			perms(s,k+1);
			a[i]=0;
	}
	}
}
int main()
{
	char input[10];
	printf("Enter the string\n");
	scanf("%s",input);
	printf("Permutation is:%s\n",input);
	perms(input,0);
	return 0;
}

