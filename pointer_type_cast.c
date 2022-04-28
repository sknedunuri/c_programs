#include<stdio.h>
void main()
{
	int a = 130;
	char *c;
	c = (char *)&a;
	printf("%d\n",*c);
}
