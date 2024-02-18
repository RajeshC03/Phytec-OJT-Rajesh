#include<stdio.h>
void maxoftwo(int x, int y)
{
	if(x>y)
		printf("%d is greater than %d\n",x,y);
	else
		printf("%d is greater than %d\n",y,x);

}
int main()
{
	int a,b;
	printf("Enter the two numbers to find maximum number\n");
	scanf("%d%d",&a,&b);
	maxoftwo(a,b);
	
	return 0;
}

