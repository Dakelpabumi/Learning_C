#include <stdio.h>

/* program to copy its input to its output, replacing each string of one or 
more blanks by a single blank. */

int main(void)
{
    int c;
    int prev = 0;
    int started = 0;

    while ((c = getchar()) != EOF)
    {
         if (c != ' ')
        {
            putchar(c);
            started = 1;   
        }
        else if ( started && prev != ' ')
        {
            putchar(c);
        }
        prev = c;
    }
}