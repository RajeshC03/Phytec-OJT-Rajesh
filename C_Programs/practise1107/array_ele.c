#include<stdio.h>
int main()
{
	int n;
	int a[]={6,7,8,9,11,12,15,16,17,18,19};
	n=sizeof(a)/sizeof(a[0]);
        int sum=0,diff=0,i=0,ele;
	diff=a[0]-i;
	for(i=1;i<n;i++)
	{
		if(diff!=(a[i]-i))
		{
			ele=a[i]-1;
			printf("Element missing is:%d\n",ele);
		}
	}
	return 0;
}
