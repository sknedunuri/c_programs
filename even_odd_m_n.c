/************************************************************************************
 WACP to find sum of all even and odd numbers from 1000 to 2000
 **************************************************************************************/
#include<stdio.h>
void main()
{
	int e_sum=0,o_sum,i;
	for(i = 1000 ; i <= 2000 ; i++)
	{
		if(i%2 == 0)
		{
			e_sum += i;
		}
		else	
		{
			o_sum += i;
		}
	}
	printf("sum of all even numbers = %d\n sum of all odd numbers = %d\n ", e_sum, o_sum);
}
