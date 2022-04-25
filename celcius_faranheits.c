//wccp to convert degree_celcius to fahrenheits
//c=(f-32)*5/9;
//f=c+32* 9/5;
#include<stdio.h>
void main()
{
	float c,f;
	printf("enter the degree_celcius to conert fahrenheits :\n");
	scanf("%f",&c);
	f = (c + 32) * 9 / 5;
	printf("fahrenheit is %f",f);
}
