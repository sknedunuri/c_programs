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
//	int a=10;
	static int i = 5,*p = &a,*z = &i;
	*p = *p + a;
	*z = *z + i;
	printf("p = %d  z = %d\n",*p,*z);	
}
