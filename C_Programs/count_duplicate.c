#include<stdio.h>
int main()
{
        int n;
        int a[]={3,6,8,8,10,12,15,15,15,20};
        n=sizeof(a)/sizeof(a[0]);
       // printf("Duplicate elements are: \n");
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				break;
			}
		}
	}
	printf("Number of duplicate elements found in array is %d\n",count);
	return 0;
}

