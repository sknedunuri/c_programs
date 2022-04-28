#include<stdio.h>
void main()
{
	int a[10] = {1,32,23,13,4,5,7,0,9,35},*p = a,x;
	x = ++*p - ++*p - *p++ + ++*p - *p++ + *++p + *++p;
	printf("%d\n",x);

} 
