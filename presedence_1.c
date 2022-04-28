#include<stdio.h>
void main()
{
	int a[5] = {1,62,43,83,25},*p = a,x;
	x = *p++;
//both are having same priority so operations starts from right to left
// first(p++) then next (*) but that is post increment so first x = *p then increments the address 
	printf("x=%d  p=%d\n",x,*p);//x=1,*p=62
	x = *++p;
	printf("x=%d p=%d\n",x,*p);//x=43,*p =43
	x =++*p;
	printf("x=%d p=%d\n",x,*p);//x =44,*p =44
	x = (*p)++;
	printf("x=%d p=%d\n",x,*p);//x =45,*p=45
} 
