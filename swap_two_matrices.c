/*************************************************************************
 WACP to swap  two given one dimension arrays
 *************************************************************************/
#include<stdio.h>
void main()
{
	int a[5],b[5],temp,i;
	printf("Enter 5 values to first array :\n");
	for(i=0 ;i<5 ;i++)
	{
		scanf("%d",&a[i]);
	}
        printf("Enter 5 values to second array :\n");
        for(i=0 ;i<5 ;i++)
        {
                scanf("%d",&b[i]);
        }
        printf("Printing values from first array before swap :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
        printf("Printing values from second array before swap :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",b[i]);
        }
	printf("\n");
        for(i=0 ;i<5 ;i++)
        {
         	temp = a[i];
		a[i] = b[i];
		b[i] = temp;
        }
        printf("Printing first array values after swaping  :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
	printf("Printing second array values after swaping  :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",b[i]);
        }
        printf("\n");

}

