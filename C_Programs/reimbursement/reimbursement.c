#include<stdio.h>
int main()
{
	int start_point,end_point;
	printf("Enter the begining of meter:\n");
	scanf("%d",&start_point);
	printf("Enter the Ending of meter:\n");
	scanf("%d",&end_point);
	reimbursement(end_point,start_point);
	return 0;
}

