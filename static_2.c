#include<stdio.h>
static int sh;
void shiva();
void main()
{
	static int sh =1234;
       	int i;	
	printf("ad = %p val=%d\tad=%p val=%d\n",&sh,sh,&sh,sh);
	for(i=0;i<3;i++)
		shiva();
        printf("%d\t%p\n",sh,&sh);

}
void shiva()
{
	static int sh = 10;
	sh++;
	printf("val =%d\t ad =%p\n",sh,&sh);
}

