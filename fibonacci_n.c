/******************************************************************
 WACP to print fibonacci series upto n
 *************************************************************/
#include<stdio.h>
void main()
{
	int f1 = 0, f2 = 1, f3 = 0, num;
	printf("Enter the n value to print up to n : ");
	scanf("%d",&num);
//	printf("%d\t%d\t",f1,f2);
//	f3 = f1 + f2;
	if(num < 1)
	{
		printf("Please enter value  more than 1\n");
	}
	else
	{
		printf("%d\t%d\t",f1,f2);
		f3 = f1 + f2;
		while(f3 <= num)
		{
			printf("%d\t",f3);
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
		}
		printf("\n");
	}
}
