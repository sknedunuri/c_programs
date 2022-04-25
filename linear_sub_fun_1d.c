//WACP to perform linear search in sub function
#include<stdio.h>
int search (int [], int size, int key);
void main()
{
	int a[20], i, size, key, found;
	printf("Enter the size of an array should lessthen 20 :\n");
	scanf("%d",&size);
	printf("Enter %d elements \n",size);
	for(i = 0; i < size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Printing array elements \n");
	for(i = 0;i < size; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
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
int search(int a[], int size, int key)
{
	int i, count = 0;
	for(i = 0;i < size; i++)
	{
		if(a[i] == key)
		{
			count = 1;
			break;
		}
	}
	return count;
}
