#include<stdio.h>
void fun();
int a = 10;
void main()
{
	fun();
	fun();
	fun();
}
void fun()
{
	static int *p = &a;
	*p = *p + a;
	printf("p = %d\n",*p);	
}

