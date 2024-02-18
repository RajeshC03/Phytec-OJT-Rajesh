#include<stdio.h>
#include<math.h>
int avgof4(int a, int b, int c, int d)
{
	float average_of_4=(a+b+c+d)/4;
	return average_of_4;
}
int main()
{
	int m,n,o,p;
	float avg;
	printf("Enter the four numbers to find average\n");
	scanf("%d%d%d%d",&m,&n,&o,&p);
	avg=avgof4(m,n,o,p);
	printf("Average is=%f\n",avg);
	
	return 0;
}


