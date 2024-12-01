#include <stdio.h>

/*  program that counts lines, words, and characters, with the loose 
definition that a word is any sequence of characters that does not contain a blank, tab or 
newline. */

#define IN 1
#define OUT 0

int main(void)
{
    int c, nl ,nw ,nc, state;
    nl = nw = nc = 0;

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if ( c == '\n')
        {
            ++nl;
        }

        if ( c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if ( state == OUT)
        {
            state == IN;
            ++nw;
        }
    }

    printf("%d %d %d", nl, nw, nc);
    
}