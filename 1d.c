#include<stdio.h>
void main()
{
	int a[5,4,65]={1,'2','h',33.23}; 
        int b[-4] = {};
        int c[30,56];	
	char a7[4]={1,'2','h'};
        printf("%d %d %d \n%d %c %c\n",a[0],a[1],a[5],a7[0],a7[1],a7[2]);
	printf("%p",&c);

}
