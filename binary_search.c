/*****************************************************************************
WACP to find an element in an array by using binary search
******************************************************************************/
#include<stdio.h>
void main()
{
	int a[10], i, j, temp=0,low = 0,mid = 0, high = 9, key, count = 0;
	printf("Enter 10 elements for an array  ;\n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Printing elements before sorting \n");
        for(i=0;i<10;i++)
        {       
                printf("%d\t",a[i]);
        }
	printf("\n");
        for(i = 0;i < 10; i++)
        {
             for(j = i+1;j<10;j++)
	     {
		   if(a[i] > a[j])
		   {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		   }
	     }
        }
	printf("Printing elements after sorting :\n");
	for(i = 0 ; i < 10; i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
	printf("Enter the key \n");
	scanf("%d",&key);
	while(high >= low)
	{
		mid = (low + high)/2;
		if(a[mid] == key)
		{
			count =1;
			break;
		}
		else if(a[mid] < key)
		{
			low = mid + 1;
		}
		else if(a[mid] > key)
		{
			high = mid - 1;
		}
	}
	if(count == 1)
		printf("key element is found \n");
	else
		printf("key element is not found \n");
}
