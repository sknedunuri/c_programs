#include<stdio.h>
void main()
{
	int const i = 10,b = 7;
	int const  *p ;
//constant pointer (or) pointer to a constant
//value cant be modified pointer can be modified
	p = &b;

	printf("%d %d\n",i,*p);
}
