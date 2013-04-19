#include <stdio.h>
#include <stdlib.h>

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
    scelta = 55;

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
        printf("Il guess corrente e': %d\n", guess);
        if(prev_guess != -1) {
            /* se non sono nel caso iniziale */
            printf("Il guess precedente era: %d\n", prev_guess);
        }

        /* dopo che guess è stato scritto
           lo "memorizzo" in una variabile di supporto */
        prev_guess = guess;

    }while( guess != scelta );


    printf("Bravo! Hai indovinato.\n");


    return 0;
}
