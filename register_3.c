#include<stdio.h>
//register int sh;
//error: register name not specified for ‘sh’
void main()
{
	register int sh;
	//printf("%d\t%p",sh,&sh);
	// error: address of global register variable ‘sh’ requested
	printf("%d\n",sh);
}

