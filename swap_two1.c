/*************************************************************************
 WACP to swap two numbers 
 *************************************************************************/
#include<stdio.h>
void main()
{
	int a,b, temp = 0;
	printf("Enter two values :\n");
	scanf("%d%d", &a, &b);
	printf("printing values before swaping a = %d ,b = %d \n",a,b);
	temp = a;
	a = b;
	b = temp;
        printf("printing values after swaping a = %d ,b = %d \n",a,b);


}

