//wccp to convert fahrenheits to degree_celcius
//c=(f-32)*5/9;
//f=(c+32)* 9/5;
#include<stdio.h>
void main()
{
	float c,f;
	printf("enter the  fahrenheits to convert degree_celcious :\n");
	scanf("%f",&f);
	c = (f - 32) * 5 / 9;
	printf("degree_celcious is %f",c);
}
