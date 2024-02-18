#include<stdio.h>
int main()
{
	int x=10,y=20,z;
	z=(++x>10)&&(y++>20);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	return 0;
}
