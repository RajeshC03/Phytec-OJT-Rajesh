int mystring_len(const char *ptr_string)
{
	int len=0;
	for(int i=0;*(ptr_string+i)!='\0';i++)
		len++;
	return len;
}
