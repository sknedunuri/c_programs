//write a c program to find the area of rectanhle
#include<stdio.h>
void main()
{
	 int len,bre,area;
	printf("enter the length and breadth of a rectangle :\n");
	scanf("%d%d",&len,&bre);
	printf("-------------------processing----------\n");
	if(len > 0  && bre > 0)
	{
		area = len * bre;
			printf("Area of a rectangel is %d",area);
	}
	else
	{
		printf("----------enter positive numbers--- ");

	}
}
