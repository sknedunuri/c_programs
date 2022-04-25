#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int temp,n;
	float x, sinx, acc, term, sinval, denominator ;
	printf("Enter the degrees :\n");
	scanf("%f",&x);
	temp = x;
	//converting degrees to radian
	x = x * (3.142 / 180.0);
	sinval = sin(x);
	printf("Enter the accuracy for the result \n");
	scanf("%f",&acc);
	term = x;
	sinx = term;
	n=1;
	while(acc <= fabs(sinval-sinx))
	{ 
		denominator = 2 * n * (2 * n + 1);
		term = -term * x * x / denominator;
		sinx = sinx + term;
		n = n + 1;
	}
	printf("Sum of the sine series = %f\n",sinx);
	printf("Library sin(%d) = %f\n",temp, sin(x));


}
