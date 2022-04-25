/****************************************************************************************
 WACP to initialize 3d array at compile time and print value,address,indexes
 *****************************************************************************************/
#include<stdio.h>
void main()
{
	int i, j, k, a[3][3][3];
	printf("Enter 27 elementd for 3x3 3d array \n");
	 for(i = 0 ; i < 3; i++)
        {
                for(j = 0 ;j < 3 ; j++)
                {
                        for(k = 0 ; k < 3 ; k++)
                        {
                                scanf("%d",&a[i][j][k]);
                        }
                 }
         }

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

