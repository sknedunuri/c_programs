//WACP to find factorial of a given number
#include<stdio.h>
void main()
{
	int n,i,fact = 1;
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	for(i = 2; i <= n; i++)
	{
		fact *= i;
	}
	printf("factorial of %d is %d \n",n,fact);

}
