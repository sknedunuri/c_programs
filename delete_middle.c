/******************************************************************************************
WACP to delete element at middle
***************************************************************************************/
#include<stdio.h>
void main()
{
	int a[10] = {1,2,3,4,5,6,7,8},j;
	printf("Enter the 8 elements for array :\n");
	printf("Printing array elements before delete :\n");
        for( j = 0 ; j < 8 ; j++)
        {
                printf("%d\t",a[j]);
        }
	for(j = 4 ; j < 7; j++)
	{
		a[j] = a[j+1];
	}
        printf("\n");
	a[7] = 0;
        printf("Printing array elements after delete :\n");
        for( j = 0 ; j < 7 ; j++)
        {
                printf("%d\t",a[j]);
        }
        printf("\n");
}

