/*********************decimal to binary**************************/


#include<stdio.h>

void dec_to_bin(int dec_num,int *arr);


int main()
{
	int arr[32],dec_num;
	printf("Enter the decimal number:");
	scanf("%d",&dec_num);
	dec_to_bin(dec_num,arr);
	return 0;
}

void dec_to_bin(int dec_num,int *arr)
{
	int  i=0,j;
	while(dec_num > 0)
	{
		arr[i] = dec_num % 2;
		dec_num =dec_num / 2;
		i++;
	}
	printf("The binary num:");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",*(arr+j));
	}
	printf("\n");
}
