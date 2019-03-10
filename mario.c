#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);
int main(void)
    
{    
    //Get "Height" from 
    int n = get_int("Height:");
    int i, j; 
    //Nested loops
    {
        for (i = 0; i < n; i++)
        {    
            for (j = 0; j > i - n + 1; j--)
            {
                printf(" ");
            }
            for (j = 0; j <= i + 1; j++)
            {
                printf("#");
            }
            printf("\n");
       
        }
    }
        
    
}
