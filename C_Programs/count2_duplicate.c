#include<stdio.h>
int main()
{
	int n;
        int a[]={3,6,8,8,10,12,15,15,15,20};
        n=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<=n-1;i++)
        {
		int count=0;
		for(int j=0;j<=n;j++)
		{
			if(a[i]==a[j+1])
				count++;


		}
	printf("%d\t%d\t",a[i],count);
	printf("\n");
	if(a[i]==a[i+1])
		i=i+2;

	}

	return 0;
}

