/******************************************************************************************
 WACP to replace middle element
 ***************************************************************************************/
#include<stdio.h>
void main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10},j;
	printf("Enter the 10 elements for array :\n");
	printf("Printing array elements before replace :\n");
        for( j = 0 ; j < 10 ; j++)
        {
                printf("%d\t",a[j]);
        }
        printf("\n");
	a[5] = 100;
        printf("Printing array elements after replace :\n");
        for( j = 0 ; j < 10 ; j++)
        {
                printf("%d\t",a[j]);
        }
        printf("\n");
}

