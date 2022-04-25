/****************************************************************************************
 WACP to initialize 3d array's at compile time and perform addition
 *****************************************************************************************/
#include<stdio.h>
void main()
{
        int i, j, k, a[3][3][3]={ {{1,2,3},{4,5,6,},{7,8,9}},
                                  {{10,11,12},{13,14,15,},{17,18,19}},
                                  {{21,22,23},{24,25,26,},{27,28,29}}
                                }, b[3][3][3]={ {{1,2,3},{4,5,6,},{7,8,9}},
                                  		{{10,11,12},{13,14,15,},{17,18,19}},
                                  		{{21,22,23},{24,25,26,},{27,28,29}}
                                	      },c[3][3][3];
	printf("Printing first 3d array elements :\n");
	for(i = 0 ; i < 3; i++)
        {
                for(j = 0 ;j < 3 ; j++)
                {
                        for(k = 0 ; k < 3 ; k++)
                        {
                         printf("%d\t",a[i][j][k]);
                        }
                        printf("\n");
                }
                printf("\n");
        }
	printf("Printing second 3d array elements :\n");
        for(i = 0 ; i < 3; i++)
        {
                for(j = 0 ;j < 3 ; j++)
                {
                        for(k = 0 ; k < 3 ; k++)
                        {
                         printf("%d\t",b[i][j][k]);
                        }
                        printf("\n");
                }
                printf("\n");
        }
        printf("Printing 3d array elements after addition : \n");
        for(i = 0 ; i < 3; i++)
        {
                for(j = 0 ;j < 3 ; j++)
                {
                        for(k = 0 ; k < 3 ; k++)
                        {
                         c[i][j][k] = a[i][j][k]+b[i][j][k];
                        }
                }
        }
        for(i = 0 ; i < 3; i++)
        {
                for(j = 0 ;j < 3 ; j++)
                {
                        for(k = 0 ; k < 3 ; k++)
                        {
                         printf("%d\t",c[i][j][k]);
                        }
                        printf("\n");
                }
                printf("\n");
        }
}

