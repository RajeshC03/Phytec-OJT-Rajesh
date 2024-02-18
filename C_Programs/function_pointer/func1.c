#include"func.h"
#include<stdio.h>
void fun1()
{
	printf("In fun1\n");
	printf("X is greater than Y");

}
void fun2()
{
	printf("In fun2\n");
	printf("Y is greater than X");
}

void fun3(int x,int y, void(*myfp)())
{
	printf("in fun3\n");
	printf("Value of X is:%d\n",x);
	printf("Value of Y is:%d\n",y);
	if(y>x)
	{
		myfp();
	}
	else
	{
		myfp();
	}

}

