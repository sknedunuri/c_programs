/************************************************************************************
 * WACP to print series of n even numbers
 * *******************************************************************************/
#include<stdio.h>
void main()
{
	int i,c = 0,n;
	printf("Enter how many even nubers to print :\n");
	scanf("%d",&n);
	for(i = 0 ; c < n ; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\t",i);
			c++;
		}
	}
}
