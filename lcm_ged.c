//WACP to find gcd and lcm of given two numbers
#include<stdio.h>
void main()
{
	int x,y,numer,denom,rem=1,gcd,lcm;
	printf("Enter two numbers :\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		numer = x;
		denom = y;
	}
	else
	{
		numer = y;
		denom =x;
	}
	while(rem != 0)
	{
		rem = numer % denom;
		numer = denom;
		denom = rem;
	}
	gcd = numer;
	lcm = (x * y)/ gcd;
	printf("gcd = %d\t lcm = %d\n",gcd,lcm);
}
