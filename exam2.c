#include<stdio.h>
void main()
{
	int a = 1,b = 3, c;
	c = b<< a;
	b = c*(b* (++a)--);
	a = a>>b;
	printf("%d\n",b);
}
