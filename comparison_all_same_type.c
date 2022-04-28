//using comparision  operator on pointers
#include<stdio.h>
void main()
{
	int a,b,*p1,*p2,*q1,*q2;
	 p1 = &a,p2 = &b;//different address foe pointers
	 q1 = &a,q2 = &a;
	printf("p1 =%p  p2=%p\n q1=%p  q2=%p\n",p1,p2,q1,q2);
	printf("different address \n");
	printf(" > %d\n < %d\n>= %d\n <= %d\n",p1 > p2,p1 < p2,p1 >= p2,p1 <= p2);
	printf("same address \n");
        printf(" > %d\n < %d\n>= %d\n <= %d\n",q1 > q2,q1 < q2,q1 >= q2,q1 <= q2);


}

