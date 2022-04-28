#include<stdio.h>
void main()
{
	int a=10,b =20,c = 10;
	int const *p,*q;
	p = &a;
	printf("%p %d\n",p,*p);
	p = &b;	
	printf("%p %d\n",p,*p);
}
