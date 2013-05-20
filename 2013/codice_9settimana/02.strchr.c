#include <stdio.h>
#include <stdlib.h>

/* AS 16.05.2013 
   my_strchr (scrittura di una funzione simile ad strchr, 
              ma che ritorna un intero invece che un puntatore)
   IN: char *s: stringa in cui cercare
   IN: int c: carattere da cercare
   OUT: int: se trovato -> posizione del carattere
             altrimenti -> -1
*/

int my_strchr (char* s, int c) {
    int i, trovato;
    int len = strlen(s); /* quanto e' lunga la stringa */
    int pos = -1;

    trovato = 0;                    /* reset */
    for(i=0;i<len;i++){             /* ciclo */
        if( s[i] == c ) {
            /* return i; */
            trovato = 1;            /* set   */
            pos = i;        /* dove ho trovato c in s */
        } /*!!! else {
             NO pos = -1;
        } */
    }

    if(trovato) {                   /* check */
        return pos; /* posizione */
    }
    else { return pos; /* -1 */}

}


/* strchr */

int main()
{

    char str[] = "Ciao, mondo!";
    char c     = 'm';

    /* per memorizzare il risultato di strchr
       ci serve una variabile di tipo  char *   */
    char *p;

    int pos;

    /* cerca il carattere c dentro la stringa str */
    p = strchr(str, c);

    if(p == NULL) {
        /* il carattere non e' stato trovato */
        printf("/* il carattere non e' stato trovato */\n");
    } else {
        /* il carattere e' stato trovato */
        printf("/* il carattere e' stato trovato */\n");

        pos = p - str;
        printf("in posizione %d\n", pos);
    }

    pos = my_strchr(str, c);
    printf("in posizione %d\n", pos);
    if(pos>=0) {
        printf("[%c]\n", str[pos]);
        printf("[%s]\n", p);
    }

    return 0;
}
