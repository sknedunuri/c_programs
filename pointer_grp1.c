#include <stdio.h>

void main()
{
    char *name;
    int length;
    char *cptr = "DELHI";
    printf("%s\n",name);
    while(*cptr != '\0')
    {
         printf("%c stored at address %p\n",*cptr,cptr);
    }
    length = cptr - name;
    printf("\n%d the length of the string is %d\n",length);
    
    
}
