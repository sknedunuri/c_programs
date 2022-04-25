/*******************************************************************************
 11. Write a C program to calculate the root of a Quadratic Equation.   
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution. 
*******************************************************************************/
#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c, r1, r2, root, val;
	printf("Enter the co-efficiants for quadratic equation :\n");
	scanf("%f%f%f", &a, &b, &c);
	if(a == 0)
	{
		printf("roots are cannot be determined :\n");
	}
	else
	{ 
		val = b * b - 4 * a * c;
		if(val == 0)
		{
		        root = -b / (2 * a);
		       	printf("Roots are real and same \n %f\t%f\n",root,root);
		}
		else if(val > 0)
		{
			printf("Roots are real and different \n");
			r1 = -b + sqrt(val) / (2 * a);
			r2 = -b - sqrt(val) / (2 * a);
			printf("%f%f\n",r1,r2);
		}
               else if(val < 0)
                { 
			val = -val;
                        printf("Roots are imaginary different \n");
                        r1 = -b  / (2 * a);
                        r2 =  sqrt(val) / (2 * a);
                        printf("imaginary %f+i%f\n",r1,r2);
                        printf("imaginary %f-i%f\n",r1,r2);
                }

	}
}
