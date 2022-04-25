//write a program to perform addition  
#include<stdio.h>
void main()
{
	int i1,i2;
	float f1,f2;
	double d1,d2;
	printf("enter two integer , float and double values :\n");
	scanf("%d%d%f%f%lf%lf", &i1, &i2, &f1, &f2, &d1, &d2);
	printf("\n----printing values are ----\n");
	printf("addition of two integer numbers %d and %d = %d \n",i1,i2,i1+i2);
	printf("addition of two float numbers %f and %f = %f \n",f1,f2,f1+f2);
	printf("addition of two double numbers %lf and %lf = %lf \n",d1,d2,d1+d2);

}
