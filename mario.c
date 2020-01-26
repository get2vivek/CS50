#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int i;
do
 
    // Prompt user for number
  
   n = get_int("Postive Number between 1 and 8: ") ;
    
   while ((n<1)||(n>8));
    
    int j;
    int l;
    
   for (i=0; i<n; i++)
{
     
       for (l=7;l>i;l--)
          
              printf(" ");
      
       for (j=0;j<=i;j++)
             
              printf("#");   
         
    printf("\n");
}

  
}
    
