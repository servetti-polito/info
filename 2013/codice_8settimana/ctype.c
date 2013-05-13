#include <stdio.h>
#include <stdlib.h>

/* fz. per i caratteri */
#include <ctype.h>

int main()
{
    /* tolower, toupper, islower, isupper */
    char str[] = "Ciao, Mondo!"; /* { 'C', 'i', ...., 'o', '!', '\0'} */
    int i;

    /*
    for(i=0; i<12; i++) {
    }
    */
    /* scorro la stringa carattere per carattere
    finche' non e' finita, cioe' fino al /0 */
    i = 0;
    while(str[i]!='\0') {
        printf("%c,", str[i]);  /* stampa carattere per carattere */

        /* converto i caratteri minuscoli in maiuscoli
           e viceversa */
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }

        i++;
    }
    printf("\n");
    printf("%s", str);


    return 0;
}
