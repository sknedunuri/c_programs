/*************************************************************************************
 *WACP to print prime numbers up to n
 ***********************************************************************************/
#include<stdio.h>
void main()
{
	int n,i,j ,count = 0;
	printf("Enter any number to print prime numbers :");
	scanf("%d",&n);
	for( j = 2; j <= n ; j++)
	{
		count = 0;
		for(i = 2 ;i <= j/2 ; i++)
			{
				if(j % i == 0)
				{
					count = 1;
					break;
				}
			}
		if(count == 0)
		{
			printf("%d\n", j);
		}
		
	}
	
}
