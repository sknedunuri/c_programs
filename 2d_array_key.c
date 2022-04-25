/***************************************************************************************
 WACP to search an element in an array
 ****************************************************************************************/
#include<stdio.h>
void main()
{
	int i, j,a[3][3]= { {1, 2, 3},
		 	    {-4,-5,-6},
			    {7, 8, 9}
			  },         k, c = 0;
	printf("Printing matrix array :\n");
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("Enter an element to search : ");
	scanf("%d",&k);
        for(i = 0 ; i < 3; i++)
        {
		for(j=0;j<3;j++)
		{
			if(a[i][j] == k)
			{
				c++;
				break;
			}
		}
			
        }
	if(c == 1)
	{
		printf("Entered element %d is found \n",k);
	}
	else
	{
		printf("Entered element %d is not found \n",k);
	}

}

