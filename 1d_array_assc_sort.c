/*************************************************************************
 WACP to sort the given elements
 *************************************************************************/
#include<stdio.h>
void main()
{
	int a[10],temp,i,j;
	printf("Enter 10 values to an array :\n");
	for(i = 0 ; i < 10 ; i++)
	{
		scanf("%d",&a[i]);
	}
        printf("Printing values from array before sorting :\n");
        for(i = 0 ; i < 10 ; i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
        for(i = 0 ;i < 10 ; i++)
        { 
		for(j = i+1 ; j< 10; j++)
		{
			if(a[i] > a[j])
			{	
         			temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
        }
       printf("Printing  array values after sorting  :\n");
        for(i = 0 ; i < 10 ; i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");

}

