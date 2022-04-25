/*************************************************************************
 WACP to perform addition on two one dimension arrays
 *************************************************************************/
#include<stdio.h>
void main()
{
	int a[5],b[5],c[5],i;
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
        printf("Printing values from first array :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
        printf("Printing values from second array :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",b[i]);
        }printf("\n");
        for(i=0 ;i<5 ;i++)
        {
         	c[i]=a[i]+b[i];
        }
    printf("Printing array values after addition  :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",c[i]);
        }
	printf("\n");

}
