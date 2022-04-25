#include<stdio.h>
void main()
{
	float  p , t, r, final;
	printf("enter the principle amount, duration and rate of intrest :\n");
	scanf("%f%f%f", &p, &t, &r);
	final = (p * t * r) / 100;
	printf("Final amount is %f ",final);
}
