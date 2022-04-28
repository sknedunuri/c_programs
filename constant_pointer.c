//(constant pointer)we cannot change the address pointed by the pointer but we can change the value
#include<stdio.h>
void main()
{
	int a=10,b=20;
	int *const p=&a;
	printf("%d\n",*p);
	a=100;
	printf("value modified by a varible %d\n",*p);
	 *p=23;
	  printf("value modified by pointer variable %d\n",*p);	
}
