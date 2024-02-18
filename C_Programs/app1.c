#include<stdio.h>
#include<stdlib.h>

int is_even_odd(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
int is_prime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int is_palindrome(int num)
{
	int r,rev=0,temp;
	temp=num;
	while(num)
		{
			r=num%10;
			rev=rev*10+r;
			num=num/10;
		}
	if(temp==rev)
		return 1;
	else
		return 0;
}
int is_Armstrong(int num)
{
	
	int r,sum=0,temp;
	temp=num;
	while(num)
		{
			r=num%10;
			sum=sum+r*r*r;
			num=num/10;
		}
	if(sum==temp)
		return 1;
	else
		return 0;
}
int is_perfect(int num)
{

	int r,sum=0,temp;
	temp=num;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}
int main()
{
	int choice,number;
	while(1)
	{
		printf("Select your program\n");
		printf("1.program for even and odd\n");
		printf("2.program for Prime number\n");
		printf("3.program for Palindrome\n");
		printf("4.program for Armstrong number\n");
		printf("5.program for Perfect\n");
		printf("0.To exit applicaton\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		printf("\n");		
		switch(choice)
		{
			case 1:
				printf("\n");		
				printf("Program for even and odd\n");
				printf("Enter a number:\n");
				scanf("%d",&number);
				if(is_even_odd(number))
					printf("Number is even\n");
				else
					printf("Number is odd\n");
				break;		
			case 2:
				printf("\n");		
				printf("Program for prime number\n");
				printf("Enter a number:\n");
				scanf("%d",&number);
				if(is_prime(number))
					printf("Number is prime\n");
				else
					printf("Number is not prime\n");
				break;
			case 3:
				printf("\n");		
				printf("Program for Palindrome number\n");
				printf("Enter a number:\n");
				scanf("%d",&number);
				if(is_palindrome(number))
					printf("Number is palindrome\n");
				else
					printf("Number is not palindrome\n");
				break;
			case 4:
				printf("\n");		
				printf("Program for Armstrong number\n");
				printf("Enter a number:\n");
				scanf("%d",&number);
				if(is_Armstrong(number))
					printf("Number is Armstrong\n");
				else
					printf("Number is not Armstrong\n");
				break;
			case 5:
				printf("\n");		
				printf("Program for perfect number\n");
				printf("Enter a number:\n");
				scanf("%d",&number);
				if(is_perfect(number))
					printf("Number is perfect\n");
				else
					printf("Number is not perfect\n");
				break;
			case 0:
				exit(0);
			default:
					printf("\n");
					printf("Invalid choice\n");
					printf("Enter a valid choice\n");
		}
	printf("\n");
	printf("\n");
	}
	return 0;
}

