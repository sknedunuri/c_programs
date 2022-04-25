//WACP to reverse the list of elements of an array sub function & print in calling function
#include<stdio.h>
void rev(int a[],int size);
void main()
{
	int a[20],size,i;
	printf("Enter size of an array : ");
	scanf("%d",&size);
	printf("Enter %d elements \n",size);
	for(i = 0;i < size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Printing elements before reverse :\n");
	for(i = 0;i < size;i++)
        {
                printf("%d\t",a[i]);
        }
	rev(a,size);
        printf("\nPrinting elements after reverse :\n");
        for(i = 0;i < size;i++)
        {
                printf("%d\t",a[i]);
        }
	printf("\n");
}
void rev(int a[],int size)
{
	int i,j = size -1,temp;
	for(i = 0;i < j; i++,j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
