/***************************************************************************************
 WACP to perform shift rows of a matrix given by user
 ***************************************************************************************/
#include<stdio.h>
void main()
{
	int a[4][4], r1, r2, i,temp , j;
	printf("Enter elements for first 4x4 array : \n");
	for(i = 0;i < 4; i++)
	{
		for(j = 0;j < 4; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Printing elements before shifting rows of 4x4 array :\n");
	for(i = 0;i < 4; i++)
        {
                for(j = 0;j < 4; j++)
                {
                        printf("%3d",a[i][j]);
                }
		printf("\n");
        }
	printf("Enter the two rows which to shift : \n");
	scanf("%d%d",&r1,&r2);

       		for(j = 0;j < 4; j++)
                {
			temp = a[r1][j];
			a[r1][j] = a[r2][j];
                        a[r2][j] = temp;
                }
        
        printf("Printing elements after shifting rows of 4x4 array :\n");
        for(i = 0;i < 4; i++)
        {
                for(j = 0;j < 4; j++)
                {
                        printf("%3d",a[i][j]);
                }
                printf("\n");
	}
}

