#include<stdio.h>
void main()
{
	int a = 258;
	int *p = &a;
	printf("%d   %d\n",*((char*)p),*((char*)p+1));
}
