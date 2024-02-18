#include<stdio.h>
#include<stdlib.h>

int *fun()
{
	static int num=10;
	return &num;
   }

int main()
{
    int *ptr = NULL;
    ptr = fun();
    printf("%d\n", *ptr);

    free(ptr); // Remember to free the dynamically allocated memory
    return 0;
}

