#include<stdio.h>
int main()
{
	int a[6]={1,2,3,5,6};
	int n=sizeof(a)/sizeof(int);
	int pos,i,value;
	printf("Enter the position to add value");
	scanf("%d",&pos);
	printf("Enter the value to be added");
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	printf("FInal array is\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}



