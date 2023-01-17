#include <stdio.h>      
#define arraySize 10
     
int main()
{
          int s[ arraySize ];  // array S has 10 elements
          int i;   
         for ( i = 0; i < arraySize; i++ )
         	s[ i ] = 2 + 2 * i;                                  
         printf("Element \t Value\n");
         for ( i = 0; i < arraySize; i++ ) 
               	printf("%d\t\t %d\n", i, s[i]);	
         return 0;
}

