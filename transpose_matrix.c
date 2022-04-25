/***************************************************************************************
 WACP to perform transpose of a matrix
 ***************************************************************************************/
#include<stdio.h>
void main()
{
	int a[3][3], b[3][3], i, j;
	printf("Enter elements for first 3x3 array : \n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0;j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Printing elements before transpose 3x3 array :\n");
	for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        printf("%3d",a[i][j]);
                }
		printf("\n");
        }
        for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        b[j][i] = a[i][j];
                }
        }
        printf("Printing elements after traspose 3x3 array :\n");
        for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        printf("%3d",b[i][j]);
                }
                printf("\n");
	}
}


