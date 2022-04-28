#include<stdio.h>
void main()
{
	char  a[10],c;
	c=&a[0]-&a[5];
	printf("%p %p\n",&a[0],&a[1]);
	printf("%d\n",c);
}
