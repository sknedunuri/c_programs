/***************************************************************************************
 WACP to print values and their addresess take values at compile time
 ****************************************************************************************/
#include<stdio.h>
void main()
{
	int i,j,a[3][3]= { {1, 2, 3},
			   {-4,-5,-6},
			   {7, 8, 9}
			 };
	printf("Printing values and addresses :\n");
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			printf("value a[%d][%d} = %d adress = %p\t", i, j, a[i][j], &a[i][j]);
		}
		printf("\n");
	}
}
