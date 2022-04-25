/*************************************************************************
 WACP to find key element in a given numbers
 *************************************************************************/
#include<stdio.h>
void main()
{
	int a[5] , key, i,count = 0;;
	printf("Enter 5 values to an array :\n");
	for(i=0 ;i<5 ;i++)
	{
		scanf("%d",&a[i]);
	}
        printf("Printing values from an array :\n");
        for(i=0 ;i<5 ;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
	printf("Enter key element to find : ");
	scanf("%d",&key);
        for(i=0 ;i<5 ;i++)
        {
          if(key == a[i])
	  {
		  count ++;
		  break;
	  }
        }
	if(count == 1)
	{
		printf("Given key element  %d is found \n",key);
	}
	else
	{
		printf("Given key element %d is not found \n",key);
	}

}

