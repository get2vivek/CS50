#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int i;
    do
 
        // Prompt user for number
        
    {
        n = get_int("Postive Number between 1 and 8: ") ;
    }
    
    while ((n < 1) || (n > 8));
    
    int j;
    int l;
    //Prints next line
    for (i = 0; i < n; i++)
    {
        //Prints spaces
        for (l = n - 1; l > i; l--)
             
        {
    
            printf(" ");
             
        }
        // Prints the #s
        for (j = 0; j <= l; j++)
       
        {
            printf("#");   
               
        }
         
        printf("\n");

    }

  
}
    
