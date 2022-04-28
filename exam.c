#include<stdio.h>
void fun(int a[]);
void main()
{
	int i,a[5] = {1};
//	fun(a);
//	for(i = 0;i<5;i++)
//	{
		printf("%d %d",a[2],a[4]);
//	}
}
void fun(int a[])
{
	a[a[0]++] =a[++a[1]];
}
