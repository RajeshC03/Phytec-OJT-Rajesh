#include<stdio.h>
void main()
{
	enum day{sun,mon=2,tue,wed};
	printf("Sun=%d\n",sun);
	printf("Mon=%d\n",mon);
	printf("Tue=%d\n",tue);
	printf("Wed=%d\n",wed);
}

