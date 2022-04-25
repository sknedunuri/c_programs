#include<stdio.h>
void main()
{
	int a[2][2]={{1,2},
		     {1,2}
		     };
	char c[2][2] = {{'k','g'},
		        {'%','&'}
	               };
	double d[2][2] = {{10.333, 123.443},
		          { 223.23, 124.234}
	                 };
	float f[2][2] = {{1.2,2.3},
		         {4.5,5.6}
	                };
	printf("%p\t %p\n",a,&a[0]);
	printf("0 -->%p\t %p\t %p\n",a+0,&a[0]+0,&a[0][0]);
	printf("1 -->%p\t %p\t %p\n",a+1,&a[1][1]-1,&a[1][0]);
       /* 
	printf("char\n");
	printf("%p\t %p\n",c,&c[0]);
        printf("0 -->%p\t %p\t %c\n",c+0,&c[0]+0,c[0]);
        printf("1 -->%p\t %p\t %c\n",c+1,&c[1]-1,c[1]);
	printf("double \n");
        printf("%p\t %p\n",d,&d[0]);
        printf("0 -->%p\t %p\t %lf\n",d+0,&d[0]+0,d[0]);
        printf("1 -->%p\t %p\t %lf\n",d+1,&d[1]-1,d[1]);
        printf("float \n");
	printf("%p\t %p\n",f,&f[0]);
        printf("0 -->%p\t %p\t %f\n",f+0,&f[0]+0,f[0]);
        printf("1 -->%p\t %p\t %f\n",f+1,&f[1]-1,f[1]);
*/
}

