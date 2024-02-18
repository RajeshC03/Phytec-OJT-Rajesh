#include<stdio.h>
int main()
{
	int n,count=0;
	int a[]={3,6,8,8,10,12,15,15,15,20};
	n=sizeof(a)/sizeof(a[0]);
	printf("Duplicate elements are: \n");
	int last_duplicate=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1]&&a[i]!=last_duplicate)
		{
			
			printf("%d\n",a[i]);
			last_duplicate=a[i];
			
			
		}
		
	}
	return 0;
}


