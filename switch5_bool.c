#include<stdio.h>
#include<stdbool.h>
void main()
{
	char a = 5,b = 3; 
	switch( a & b )   //1
	{
	   case 0  :    printf("its boolean and--case 0\n");
                        	      break;
	   case 1  :    printf(" its boolean and-- case 1\n");
	 		  		break;
	   default  :    printf("default\n");
                            		break;
	}
	switch( a | b)  //7
	{
	     case 5 :  printf("its boolean or--case 0");
                                   break;
	     case 7 :  printf("boolean or -- case 1\n");
                                    break;
	     default :  printf("default\n");
                        	    break;
	}
	  switch( a >> 1) //2
        {
             case 2 :       printf("its boolean right--case 0\n");
                                   break;
             case 3 :    printf("boolean right -- case 1\n");
                                    break;
             default :  printf("default\n");
                                    break;
	}
        switch( a << 1)   //10
        {
             case 80        :  printf("its boolean left--case 0");
                                   break;
             case 10 :  printf("boolean left -- case 1\n");
                                    break;
             default       :  printf("default\n");
                                    break;
	}
}

