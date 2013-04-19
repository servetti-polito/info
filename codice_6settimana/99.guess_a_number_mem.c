#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* Ciclo indefinito: controllato da sentinella */
/* Guess a number:
   - con istruzione do {} while ()
   - introduzione di una memoria nel ciclo
 */


int main()
{
    /* il numero che penso io */
    int scelta;
    /* il numero che mi dite voi */
    int guess;

    /* il tentativo precedente */
    int prev_guess = -1;

    /* A: inizializzazione */

    /* il numero da indovinare viene scelto casualmente */
    srand( time(NULL) );
    scelta = rand() % 100 ;
    printf("scelta = %d\n", scelta);

    do {

        /* per prima cosa:
           ti chiedo di indovinare il numero */
        printf("Che numero ho pensato? ");
        scanf("%d", &guess);

        /* qui: in cui ho sovrascritto guess
           ma non ancora prev_guess
           avrò a disposizione entrambi per il confronto
           - io ho in guess il tentativo corrente
           - in prev_guess il tentativo precedente */
        /* printf("Il guess corrente e': %d\n", guess); */
        if(prev_guess != -1 && guess != scelta) {
            /* se non sono nel caso iniziale */
            /* printf("Il guess precedente era: %d\n", prev_guess); */
            if(abs(prev_guess-scelta) < abs(guess-scelta)) {
                printf("Ti stai allontanando dal numero pensato.\n");
            } else {
                printf("Ti stai avvicinando al numero pensato.\n");
            }
        }

        /* dopo che guess è stato scritto
           lo "memorizzo" in una variabile di supporto */
        prev_guess = guess;

    }while( guess != scelta );


    printf("Bravo! Hai indovinato.\n");


    return 0;
}
