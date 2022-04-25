//write a c program to find the area of triangle
#include<stdio.h>
void main()
{
	float area1,area2,b,h;
	printf("enter the breadth and length of a triangle :\n");
	scanf("%f%f",&b,&h);
	area2 =1.0/2*b*h; 
	area1 = 0.5 * (b * h);
	printf("1Area of a triangle is = %f \n",area1);
	  printf("2Area of a triangle is = %f \n",area2);

}

