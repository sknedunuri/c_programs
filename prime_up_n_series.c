/*************************************************************************************
 *WACP to print prime numbers of n series
 ***********************************************************************************/
#include<stdio.h>
void main()
{
        int n,i,j = 2,num = 1,count = 0;
        printf("Enter any number to print no of prime numbers :");
        scanf("%d",&n);
        while(num <= n)
        {
                count = 0;
                for(i = 2 ;i <= j/2 ; i++)
                        {
                                if(j % i == 0)
                                {
                                        count = 1;
                                        break;
                                }
                        }
                if(count == 0)
                {
                        printf("%d\n", j);
			num ++;
		}
		j++;

        }

}

