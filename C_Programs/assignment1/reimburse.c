#include<stdio.h>
#include<math.h>
int main()
{
	int start_point,end_point,total_dist,amnt;
	printf("Enter the begining of meter:\n");
	scanf("%d",&start_point);
	printf("Enter the Ending of meter:\n");
	scanf("%d",&end_point);
	total_dist=end_point-start_point;
	printf("Total Distance Travelled is %dKm\n",total_dist);
	amnt=total_dist*20;
	printf("Reimbursement Value is Rs.%d\n",amnt);
	return 0;
}

