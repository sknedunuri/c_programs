/*******************************************************************************
WACP to read and print all the details of 10 students in a class using array of structures 
NOTE: pass array
****************************************************************************/
#include<stdio.h>
struct shiva
{
	int r_no;
	char name[10];
	char branch[5];
	float percent;
}k[2];
void read(struct shiva []);
void print(struct shiva []);
void main()
{
	read(k);
	print(k);
}
void read(struct shiva k[])
{
	int i;
	for(i = 0;i < 2; i++)
	{
		printf("Enter the %d student datails number,name,branch,percentage \n",i+1);
		scanf("%d%s%s%f", &k[i].r_no, k[i].name, k[i].branch, &k[i].percent);
	}
}
void print(struct shiva k[])
{
        int i;
        for(i = 0;i < 2; i++)
        {
                printf("printing the %d student datails numer,name,branch,percentage \n",i+1);
                printf("%d   %s  %s %f\n", k[i].r_no, k[i].name, k[i].branch, k[i].percent);
        }
}

