/***********************Binary to decimal*****************************/

#include<stdio.h>

int binary_to_dec(int num);

int main()
{
	int num,dec_num;
	printf("Enter the binary number:");
	scanf("%d",&num);
	dec_num=binary_to_dec(num);
	printf("The Binary num = %d\n",num);
	printf("The decimal num = %d\n",dec_num);
	return 0;
}


int binary_to_dec(int num)
{
	int dec_num =  0,base = 1, rem;
	while(num > 0)
	{
		rem = num % 10;
		dec_num = dec_num + rem *base;
		num = num / 10;
		base = base * 2;
	}
	return dec_num;
}
