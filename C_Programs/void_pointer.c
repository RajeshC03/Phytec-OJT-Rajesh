#include<stdio.h>
int main()
{
int n=10;
void *ptr=&n;
printf("%d\n",*(int*)ptr);
return 0;
}

