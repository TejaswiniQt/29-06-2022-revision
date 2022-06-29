/*********************Program to allocate memory to 2d array dynamically********************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **ptr,i,j,row,col;
	ptr = NULL;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&row,&col);
	ptr = (int **)malloc(sizeof(int *) * row);
	for(i=0;i<row;i++)
	{
		*(ptr+i) = (int *)malloc(sizeof(int) * col);
	}
	printf("Enter the elements of the array:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",*(ptr+i)+j);
		}
	}

	printf("The elements of the array:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",*(*(ptr+i)+j));
		}
		printf("\n");
	}
return 0;
}
