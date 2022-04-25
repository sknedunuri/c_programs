//WACP to find factorial of a given number in sub function
#include<stdio.h>
int shiva(int );
void main()
{
	int n,f;
	printf("Enter a number to find factorial : ");
        scanf("%d",&n);
	f = shiva(n);
       printf("factorial of %d is %d \n",n,f);

}
int shiva(int n)
{
        int i,fact = 1;
	for(i = 2; i <= n; i++)
	{
		fact *= i;
	}
	printf("factorial(in sub function) of %d is %d \n",n,fact);
	return fact;
}

