#include<stdio.h>
void main()
{
	int a = 10,b = 20,c = 30,*p,*q,*r;
	p=&a;
	printf("&p = %p &a = %p\n",&p,&a);
	printf("add = %p,val = %d\n",*(&p),*(&p));

}
