#include <stdio.h>

/* count digits, white space, others */
int main() {
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;

    // Initialize digit counts to 0
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    printf("Enter text (end with EOF):\n");
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') 
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    // Output results
    printf("\nWhite space = %d, Other = %d \nDigits =",nwhite, nother);
    for (i = 0; i < 10; ++i)
    {
         printf(" %d \n", ndigit[i]);
    }
    return 0;
}
