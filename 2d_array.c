#include<stdio.h>
void main()
{
	int a[2][2] = {{1,2},
		        {3,4}
			};
	printf("%p\t %p\t%p\n",&a+1,a[1],&a[1][0]);
	// printf("%d\t %d\t%d\n",a+1,a[1],a[1][0]+1);
}
