#include"reimb.h"
void reimbursement(int n,int m)
{
	int total_dist=n-m;
	printf("Total Distance Travelled is %dKm\n",total_dist);
	int amnt=total_dist*20;
	printf("Reimbursement Value is Rs.%d\n",amnt);
	return 0;
}

