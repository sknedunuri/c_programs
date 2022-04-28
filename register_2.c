#include<stdio.h>
register int sh;
void main()
{
	//printf("%d\t%p",sh,&sh);
	// error: address of global register variable ‘sh’ requested
	printf("%d\n",sh);
	//error: register name not specified for ‘sh’
    
}
