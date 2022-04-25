/*
*
* *
* * *
* * * *
* * * * *(up to n)
*/
#include<stdio.h>
void main()
{ 
	int i,j,n;
	printf("Enter how many rows you want : ");
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

