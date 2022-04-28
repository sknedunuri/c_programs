#include<stdio.h>
static int sh;
void main()
{
	static int sh =1; 
	printf("%d\n%d\n",sh,sh);

}
