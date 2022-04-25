//wacp to fiind the denomination of 1753

#include<stdio.h>
void main()
{
	 int amount, c_2000, c_500, c_200, c_100, c_50, c_20, c_10, c_5, c_2, c_1;
	printf("Enter an amount to find what are notes have :\n");
	scanf("%u",&amount);
	c_2000 = amount / 2000;
	amount = amount - (2000 * c_2000);
      	c_500 = amount / 500;
        amount = amount - (500 * c_500);
	c_200 = amount / 200;
        amount = amount - (200 * c_200);
       c_100 = amount / 100;
        amount = amount - (100 * c_100);
	c_50 = amount / 50;
        amount = amount - (50 * c_50); 
	c_20 = amount / 20;
        amount = amount - (20 * c_20);
       c_10 = amount / 10;
        amount = amount - (10 * c_10);
       c_5 = amount / 5;
        amount = amount - (5 * c_5);
       c_2 = amount / 2;
        amount = amount - (2 * c_2);
       c_1 = amount / 1;
        amount = amount - (1 * c_1);
	printf("no of 2000 notes are = %u\n no of 500 notes are = %u\n no of 200 notes are = %u\n no of 100 notes are = %u\n no of 50 notes are = %u\n no of 20 notes are = %u\n no of 10 notes are = %u \n no of 5rp coins are = %u\n no of 2rp coins are = %u\n no of 2rp coins are = %u", c_2000, c_500, c_200, c_100, c_50, c_20, c_10, c_5, c_2, c_1);
//printf("%d %d",c_2000,amount);

}
