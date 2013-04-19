#include <stdio.h>
#include <stdlib.h>

/* AS 15.04.2013
   Ciclo indefinito: controllato da sentinella */
/* Guess a number:
   - con istruzione do {} while ()
 */


int main()
{
    /* il numero che penso io */
    int scelta;
    /* il numero che mi dite voi */
    int guess;

    /* A: inizializzazione */
    scelta = 55;

    do {

        /* per prima cosa:
           ti chiedo di indovinare il numero */
        printf("Che numero ho pensato? ");
        scanf("%d", &guess);

        /* B: qualcosa - l'indizio */
        if(guess < scelta) {
            printf("Prova un numero più grande.\n");
        } else if(guess > scelta) {
            printf("Prova un numero più piccolo.\n");
        }

    }while( guess != scelta );


    printf("Bravo! Hai indovinato.\n");


    return 0;
}
