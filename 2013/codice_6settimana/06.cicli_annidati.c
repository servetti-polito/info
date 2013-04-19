#include <stdio.h>
#include <stdlib.h>

/* AS 18.4.2013
   Cicli annidati:
   - il ciclo più interno viene 'ripetuto più velocemente'
   - esempio di orologio digitale
     - ciclo interno stampa le unità
     - ciclo esterno stampa le decine
   - esempio triangolo di asterischi
     - si puo' scrivere il ciclo interno in modo che dipenda dal contatore del ciclo esterno
*/

int main()
{
    int i, j; /* k */
    int n;

    n = 1;
    for(i=0; i<6; i++) {
        /* il codice viene ripetuto 10 volte */
        /* printf("[%d] ************\n",i); */
        printf("[%d] ", n);

/*
        for(j=0; j<(6-(i+1))/2; j++) {
                printf(" ");
        }
*/

        for(j=0; j<(i+1); j++) {
                printf("*");
                /* printf("(%d,%d)", i, j); */

        }
        printf("\n");
        n++;
    }
    printf("\n\n\n");

    /* Orologio digiale
    00 01 02 03 ... 09 10 11 12 ...
    i: conta le decine di minuti
    j: conta le unita' di minuti */

    for(i=0; i<6; i++) {
        /* il codice viene ripetuto 10 volte */
        /* printf("[%d] ************\n",i); */
        for(j=0; j<10; j++) {


            printf("%d%d ", /*decine*/ i, /*unita'*/ j);
#if 0
            /* Giocando con i caratteri */
            printf("%c%c", /*decine*/ 'A'+i, /*unita'*/ '!'+j);
#endif

        }
        printf("\n");

    }

    return 0;
}
