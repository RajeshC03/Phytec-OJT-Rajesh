#include<stdio.h>
int main()
{
int n;
{
printf("Enter the Number: ");
scanf("%d",&n);
while(n!=0)
{
	if(n<0)
		break;
	printf("Again Enter different number: ");
	scanf("%d",&n);
}
printf("Sorry You can't enter this number\n");
return 0;
}
}

