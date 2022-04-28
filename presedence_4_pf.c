//unary operators with arithmatic on pointers
#include<stdio.h>
void main()
{
	int a[10] = {25,24,27,14,15,16,17,18},*p = a,x;
	printf("a[1] =%d\n",a[1]);
	printf("%d %d %d %d %d %d %d %d %d\n",++*p , *++p , *p++ , ++*p , ++*p , *++p , *p++ , *++p , ++*p);
}
