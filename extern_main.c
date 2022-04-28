#include<stdio.h>
extern int a;
extern char c;
extern float f;
extern double d;
void shiva();
void main()
{
	shiva();
	printf("%d  %d  %f  %lf",a,c,f,d);

}
