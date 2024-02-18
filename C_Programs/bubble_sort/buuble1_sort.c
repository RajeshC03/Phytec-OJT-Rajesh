#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number of data in array\n");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int temp;
	printf("Before Sort\n");
	printarray(A,n);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{

			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("After Sort the array is:\n");
	printarray(A,n);
	printf("\n");

}

