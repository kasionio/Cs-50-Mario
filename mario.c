//CS50 Lecture 2 Mario.c IDE https://sandbox.cs50.io

#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);
int main(void)
    
{    
    //Get "Height" from user
    int n = get_positive_int("Height:");
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

//Function get Height from user until it will fit between 1 & 7
int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n > 8 || n < 1);
    return n;
}
