//WACP to print natural numbers up to a given number by using recursion
#include<stdio.h>
int shiva(int);
void main()
{
        int n;
        printf("Enter n value : ");
        scanf("%d",&n);
        shiva(n);
	printf("\n");
}
int shiva(int n)
{
         int ch=0;
        if(n <=	0)
        {
	   return 0;
        }
        else
        {
              printf("%d\t",n); 
              shiva(n-1);

        }
        
}

