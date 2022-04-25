/************************************************************************************
 WACP to find sum of all prime numbers up to n
 **************************************************************************************/
#include<stdio.h>
void main()
{
	int n,sum=0,count,i,j;
	printf("Enter till where you want sum of prime numbers :\n");
	scanf("%d",&n);
	for(i = 2 ; i <= n ; i++)
	{
		count = 0;
		for(j = 2 ; j<=i/2;j++)
		{
			if(i%j == 0)
			{
				count ++;
				break;
			}
		}
		if(count == 0)
		{
			sum += i;
		}
	}
	printf("sum of all prime numbers up to %d id %d\n",n,sum);
}
