/***************************************************************************************
 WACP to read and print elements from 2D array
 ***************************************************************************************/
#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	printf("Enter elements for 3x3 array : \n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0;j < 3; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Printfing elements from 3x3 matrix :\n");
	for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        printf("%3d",arr[i][j]);
                }
		printf("\n");
        }
}
