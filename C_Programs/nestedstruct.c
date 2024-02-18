#include<stdio.h>
typedef struct address
{
	int house_no;
}address;
typedef struct emp
{
	int emp_id;
	address d;
}emp;
void main()
{
	emp e1;
	printf("Enter the employment id:");
	scanf("%d",&e1.emp_id);
	printf("Enter the House Number:");
	scanf("%d",&e1.d.house_no);
	printf("The details are\n");
	printf("The Employment Id is:%d\n",e1.emp_id);
	printf("The House number is:%d\n",e1.d.house_no);
}


