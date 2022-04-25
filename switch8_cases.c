#include<stdio.h>
int main()
{
	char a = 0; 
	switch( a )   //1
	{
		
	   case 0  :printf("123\n");
		 //  {	
			
	   		case 1  :    printf("  case 1\n");
	 			       break;
	   		case 2  :    printf("case 2\n");
                            		break;

	     		case 3 :  printf("case 5\n");
                                	 break;
	     		case 7 :  printf("boolean or -- case 1\n");
                                	    break;
	     	
		//}
	   case 9 :printf("hello\n");
		  // break;
	   default :
		   printf("subash\n");
		   return 0;
	}
}

