#include"string.h"
int len(char *ptr)
{
	int len=0;
	while(*ptr!='\0')
	{
		len++;
		ptr++;
	}
	return len;
}

