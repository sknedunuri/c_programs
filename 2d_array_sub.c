/***************************************************************************************
 WACP to perform substraction on two 2D array's
 ***************************************************************************************/
#include<stdio.h>
void main()
{
	int a[3][3], b[3][3], sub[3][3], i, j;
	printf("Enter elements for first 3x3 array : \n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0;j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
        printf("Enter elements for second 3x3 array : \n");
        for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

	printf("Printing elements from first 3x3 array :\n");
	for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        printf("%3d",a[i][j]);
                }
		printf("\n");
        }
	printf("Printing elements from second 3x3 array :\n");
        for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        printf("%3d",b[i][j]);
                }
                printf("\n");
        }
	for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        sub[i][j] = a[i][j] - b[i][j];
                }
        }
        printf("Printing elements from third 3x3 array after substraction :\n");
        for(i = 0;i < 3; i++)
        {
                for(j = 0;j < 3; j++)
                {
                        printf("%3d",sub[i][j]);
                }
                printf("\n");
        }
}
