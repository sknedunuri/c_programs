#include<stdio.h>
int fun(int );
void main()
{
	//int i=7,num,a[] = {1,2,3};
/*	num = a[++i]+ ++i +(++i);
//	for(i = 0;i<5;i++)
//	{
		printf("%d ",num);
//	}
   
	printf("%%");
	return 0;*/
//	fun(323);
/*	int const size = 5;int ex;
	double v[size]={2.0,4.0,6.0,8.0,10.0};
	ex = 1|2|3|4;
	printf("%f",v[ex]);*/
	double num = 6.9;
	int var = 4;
	printf("%d\t",sizeof(!num));
        printf("%d\t",sizeof(var = 12/2));
        printf("%d",var);
}
int fun(int a)
{
	int c=0;
	while(a)
	{
		c++;
		a >>= 1; 
	}
	printf("%d",c);
	return (c);
}

