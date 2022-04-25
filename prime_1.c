/*************************************************************************************
 *WACP to print given number is prime number or not ..?
 ***********************************************************************************/
#include<stdio.h>
void main()
{
	int n,i,j,count = 0;
	printf("Enter any number to check prime or not :\n");
	scanf("%d",&n);
	if(n < 2)
	{
		printf("Prime numbers start from 2 \n");
	}
	else
	{
	for(i = 2 ;i <= n/2 ; i++)
	{
		if(n % i == 0)
		{
			count = 1;
			break;
		}
	}
	if(count == 0)
	{
		printf("Entered number %d is prime number\n" ,n);
	}
	else
	{
		printf("Entered number %d is not a prime number\n",n);
	}
	}
}
