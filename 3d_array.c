/****************************************************************************************
 WACP to initialize 3d array at compile time and print value,address,indexes
 *****************************************************************************************/
#include<stdio.h>
void main()
{
	int i, j, k, a[3][3][3]={ {{1,2,3},{4,5,6,},{7,8,9}},
				  {{10,11,12},{13,14,15,},{17,18,19}},
				  {{21,22,23},{24,25,26,},{27,28,29}}
				};
	printf("Printing 3d array elements,index and address : \n");
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ;j < 3 ; j++)
		{
			for(k = 0 ; k < 3 ; k++)
			{
				printf("index = a[%d][%d][%d] value =%d address = %p\t",i,j,k,a[i][j][k],&a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
