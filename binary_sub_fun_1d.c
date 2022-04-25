//WACP to find a key element by using binary search in sub-function
#include<stdio.h>
int binary_search(int a[],int size,int );
void main()
{
	int a[20], found = 0, size, i, key;
	printf("Enter size of an array : ");
	scanf("%d",&size);
	printf("Enter %d elements \n",size);
	for(i = 0;i < size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Printing elements before sorting :\n");
	for(i = 0;i < size;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\nEnter the key element to search : ");
	scanf("%d",&key);
	found = binary_search(a,size,key);
	if(found == 1)
	{
		printf("key element is found\n");
	}
	else
	{
		printf("key element is not found\n");
	}
}
int binary_search(int a[],int size,int key)
{	
	int i,j,low,mid,high,temp;	
	for( i = 0;i < size; i++)
	{
		for(j = i+1; j < size; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("After sorting \n");
	for(i = 0;i < size; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	low = 0, high = size -1;
	while(low <= high)
	{
		mid = (low +high) / 2;
		if(key == a[mid])
		{
			return 1;
		}
		else if(key < a[mid])
		{
			high = mid-1;
		}
		else if(key > a[mid])
		{
			low = mid + 1;
		}
	}
	if(low > high)
	{
		return 2;
	}

}
