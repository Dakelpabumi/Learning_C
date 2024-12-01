#include <stdio.h>

/* program to copy its input to its output, replacing each tab by \t, each 
backspace by \b, and each backslash by \\. */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            printf("\\t");
            break;
        case '\\':
            printf("\\\\");
            break;
        case '\b':
            printf("\\b");
            break;
        case ' ':
            printf("blank_space");
            break;
        default:
            putchar(c);
        }
    }

    return 0;
}