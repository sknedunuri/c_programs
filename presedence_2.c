#include<stdio.h>
void main()
{
	int a[8] = {1,32,23,13,4,5,7},*p = a,x;
	x = *p++ + *p++ - *++p + *p++ + *p++ ;
	printf("%d\n",x);

} 
