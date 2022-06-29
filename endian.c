/***************Program to find the system is little endian or big endian**************************/

#include<stdio.h>

int endian(char *ptr_arg);

int main()
{
	int num = 0x11223300, val;
	char *ptr = (char *)&num;
	val = endian(ptr);
	if(val == 1)
		printf("Big endian\n");
	else
		printf("Little endian\n");
	return 0;
}


int endian(char *ptr_arg)
{
	if(*ptr_arg)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
