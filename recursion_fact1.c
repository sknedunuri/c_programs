//WACP to find recursion of a given number by using recursion
#include<stdio.h>
int shiva(int);
void main()
{
	long int n, fact;
	printf("Enter n value : ");
	scanf("%ld",&n);
	fact = shiva(n);
	printf("factorial of %ld is %ld\n ", n, fact);

}
int shiva(int n)
{
        long int fact = 1;
	if(n == 0)
	{
		return 1;
	}
	else
	{
		//fact += n * shiva(n-1);//if not return fact
		fact = n * shiva(n-1);

	}	
	return fact ;
}
