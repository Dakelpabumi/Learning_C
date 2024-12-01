 #include <stdio.h> 
   /* count characters in input */ 
   int main() 
   { 
        int c;
        double nc;
        nc = 0;

       while ((c = getchar()) != EOF)
       {
        if ( c != '\n')
        {
            ++nc;
        }
       } 
       printf("%.0f", nc);
   }