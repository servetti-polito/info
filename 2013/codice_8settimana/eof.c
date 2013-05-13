#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;

    char str[1000];

    /* aggiungere scanf */

    while( gets(str) != NULL ){
        puts(str);
    }

    return 0;

    /* per ogni carattere che leggo */
    while( (c=getchar()) != EOF )
    {
        if(islower(c)) {
            putchar(toupper(c));
        } else {
            putchar(tolower(c));
        }
    }
    return 0;
}
