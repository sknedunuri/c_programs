/******************************************************************************************
WACP to insert new element at begining
***************************************************************************************/
#include<stdio.h>
void main()
{
	int a[10] = {1,2,3,4,5,6,7,8},j;
	printf("Enter the 8 elements for array :\n");
	printf("Printing array elements before inserting :\n");
	for( j = 0 ; j < 8 ; j++)
	{
		printf("%3d",a[j]);
	}
	printf("\n");
	for(j = 8; j > 0 ; j--)
	{
		a[j] = a[j-1];
	}
	a[0] = 345;
        printf("Printing array elements after inserting :\n");
        for( j = 0 ; j < 9 ; j++)
        {
                printf("%3d",a[j]);
        }
        printf("\n");
}
