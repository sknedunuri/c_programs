/******************************************************************
 WACP to print fibonacci n series  
 *************************************************************/
#include<stdio.h>
void main()
{
        int f1 = 0, f2 = 1, f3 = 0, num,i=0;
        printf("Enter the n value to print n series : ");
        scanf("%d",&num);
        if(num < 1)
        {
                printf("Please enter value  more than 1\n");
        }
        else
        {
               // printf("%d\t%d\t",f1,f2);
               // f3 = f1 + f2;
                while(i < num)
                {
                        printf("%d\t",f1);
                       f3 = f1 + f2;
		       	f1 = f2;
                        f2 = f3;
                       i++;
                }
                printf("\n");
        }
}
