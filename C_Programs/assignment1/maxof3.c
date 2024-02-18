#include<stdio.h>
int main()
{
	int n1,n2,n3,max_of_3;
	printf("Enter the value of three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	max_of_3=(n1>n2?(n1>n3?n1:n3):(n2>n3)?n2:n3);
	printf("Max 0f 3 numbers is=%d\n",max_of_3);
	return 0;
}

