//constant pointer to constanr datatype
#include<stdio.h>
void main()
{
	int a = 10, b = 20;
	const int *const p=&b;
	p = &b;
	*p =20;
}
