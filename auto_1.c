#include<stdio.h>
int a ;
//auto int a; // error: file-scope declaration of ‘a’ specifies ‘auto’
void main()
{
	auto int b = 10;
	printf("a = %d\tb = %d\n",a,b);
}
