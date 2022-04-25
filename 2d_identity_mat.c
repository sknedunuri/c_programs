/***************************************************************************************
 WACP to find give array is an identical array or not ..?
ex : 1 0 0
     0 1 0
     0 0 1
     o/p : yes
 ****************************************************************************************/
#include<stdio.h>
void main()
{
	int i, j, a[3][3], k = 0, c = 0;
	printf("Enter a 3x3  matrix array :\n");
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Printfing elements from 3x3 matrix array : \n");
        for(i = 0 ; i < 3; i++)
        {
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
        }
        for(i = 0 ; i < 3; i++)
        {
                for(j=0;j<3;j++)
                {	
			if( i == j && a[i][j] == 1 )
			{
				c++;
			}
			else if( i != j && a[i][j] == 0 )
			{
				c++;
			}
			else if( ( i == j && a[i][j] != 1 ) || ( i != j && a[i][j] != 0 ) )
			{
				k = 1;
				goto lable;
			}
		}                
                lable :if(k == 1)
		       {
			       break;
		       }
        }
	if(c == 9)
	{
		printf("Given matrix is an identical \n");
	}
	else
	{
		printf("Given matrix is not an identical \n");
	}
}

