#include<stdio.h>
int main()
{
	int n,j;
        int a[]={3,6,8,8,10,12,15,15,15,20};
        n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			int j=i+1;
			while(a[i]==a[j])
			{
			j++;
			printf("%d %d\n",a[i],j-i);
			i=j-1;
			}
		}
	}
	return 0;
}



