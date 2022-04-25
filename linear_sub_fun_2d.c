//WACP to perform linear search in sub function in 2d
#include<stdio.h>
int search (int [3][3], int size, int key);
void main()
{
	int a[3][3], i, size = 3, key, found,j;
	printf("Enter %dx%d matrix elements \n",size,size);
	for(i = 0; i < size; i++)
	{	
		for(j = 0; j < size; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" Printing array elements \n");
	for(i = 0;i < size; i++)
	{	
		for(j = 0;j < size; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter key element to find : ");
	scanf("%d",&key);
	found = search(a, size, key);
	if(found == 1)
	{
		printf("key element %d is found \n",key);
	}
	else
	{
		printf("key element %d is not found \n",key);
	}
}
int search(int a[3][3], int size, int key)
{
	int i, count = 0,j;
	for(i = 0;i < size; i++)
	{
		for(j =0;j < size;j++)
		{
			if(a[i][j] == key)
			{
				count = 1;
				break;
			}
		}
	}
	return count;
}
