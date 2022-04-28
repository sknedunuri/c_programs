#include<stdio.h>
void fun();
void main()
{
        fun();
        fun();
        fun();
}
void fun()
{
        int a=10;
        static int *p = &a;
        *p = *p + a;
        printf("p = %d\n",*p);
}
