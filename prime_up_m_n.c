/*************************************************************************************
 *WACP to print range of prime numbers from n to m
 ***********************************************************************************/
#include<stdio.h>
void main()
{
        int n,i,j, m ,count = 0,temp = 0;
        printf("Enter the range to print prime numbers :");
        scanf("%d%d",&n,&m);
	if(n < 2 || m < 2)
	{
		printf("enter valid range \n");
	}
	else
	{
		 if(n > m)
		{
			temp = n;
			n = m;
			m= temp;
		}
	
        	for( j = n; j <= m ; j++)
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
                	}

        	}
	}

}
