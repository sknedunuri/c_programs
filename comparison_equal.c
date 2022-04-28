//using comparision equal to operator on pointers
#include<stdio.h>
void main()
{
	int a,b,*p1,*p2,*q1,*q2;
	 p1 = &a,p2 = &b;//different address
	 q1 = &a,q2 = &a;
	printf("different address %d\n",p1 == p2);
	printf("same address %d\n",q1 == q2);


}
