//unary operators with arithmatic on pointers
#include<stdio.h>
void main()
{
	int a[10] = {25,24,27,14,15,16,17,18},*p = a,x,i=1;
	printf("a[1] =%d\n",3[a]);
	x = ++*p - *++p - *p++ + ++*p * ++*p + *++p + *p++ * *++p * ++*p;
	printf("%d\n",x);
	

} 
