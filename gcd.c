/*******************************************************************************
 WACP to find GCD of two numbers
 ****************************************************************************/
#include<stdio.h>
void main()
{
	int num1, num2,numerator, denominator, rem ,gcd,lcm;
	printf("Enter the two numbers to find the GCD :\n");
	scanf("%d%d", &num1, &num2);
	if(num1 > num2)
	{
		numerator = num1;
		denominator = num2;
	}
	else
	{
                numerator = num2;
                denominator = num1;
        }
	rem = numerator % denominator;
	while(rem)
	{
	//	rem = numerator % denominator;
		numerator = denominator;
		denominator = rem;
	  rem = numerator % denominator;
	}
	gcd = denominator;
	printf("GCD = %d\n",gcd);
	lcm = num1 * num2 / gcd;
	printf("LCM = %d\n",lcm);

}
