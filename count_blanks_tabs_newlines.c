#include <stdio.h>
/* count tabs, blanks and newlines */
int main(void)
{
    int c, b, t, nl;
    b, t, nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++b;
        }
        else if (c == '\t')
        {
            ++t;
        }
        else if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%3d %3d %3d \n", b, t, nl);
    return 0;
}