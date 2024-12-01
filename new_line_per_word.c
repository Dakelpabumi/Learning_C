#include <stdio.h>
/* prints its input one word per line.  */

#define IN 1
#define OUT 2

int main(void)
{
    int c, state;
    
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if ( c == ' ')
        {
            if ( state == IN)
            {
                printf("\n");
                state = OUT;
            }
        }
        else
        {
            putchar(c);
            state = IN;
        }
           
    }
}