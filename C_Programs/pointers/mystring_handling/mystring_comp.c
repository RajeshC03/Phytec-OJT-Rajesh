int mystring_comp(const char *ptrch1,const char *ptrch2)
{
	for(int i=0;*(ptrch2+i)!='\0';i++)
		if(*(ptrch1+i)!=*(ptrch2+i))
			return 0;
	return 1;

}
