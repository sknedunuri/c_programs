#include<stdio.h>

void main()
{
	register int sh =4;
	//printf("%d\t%p",sh,&sh);
	// error: address of register variable ‘sh’ requested
	printf("%d\n",sh);
}
