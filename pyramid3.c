/* print following pattern:

         	*	
	      *	*	
	    *	*	*	
    * *	*	*	
  *	*	*	*	*
*	*	*	*	*	*	
	
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6-i;j++)
        { 
            
            printf(" \t");
        }
       for(k=1;k<=6-j+1;k++)
        {
             printf("*\t");
              
        }
         printf("\n");   
    }
    
    
    return 0;
}






