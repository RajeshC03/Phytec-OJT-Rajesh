#include<stdio.h>
void reimbruse(void)
{
	int ent_beg,ent_end,reimbruse=0,total_dist=0;
	printf("Enter the beginning point meter reading\n");
	scanf("%d",&ent_beg);
	printf("Enter the end point meter reading\n ");
	scanf("%d",&ent_end);
	total_dist=ent_beg-ent_beg;
	reimbruse=total_dist*20;
	printf("Total distanxce= %d\n ",total_dist);
	printf("Expense = %d\n",reimbruse);
}
