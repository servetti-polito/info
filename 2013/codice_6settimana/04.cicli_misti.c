#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* AS 18.4.2013
   Cicli misti:
   - sia controllati da contatore
   - sia controllati da sentinella

   Esempio:
   - guess a number che continua
     - fino ad un massimo di 10 tentativi => contatore
     - o fino a che l'utente indovina     => sentinella
*/


int main()
{
    /* il numero che penso io */
    int scelta;
    /* il numero che mi dite voi */
    int guess;

    /* il tentativo precedente */
    int prev_guess = -1;
    /* contatore tentativi */
    int n_tentativi = 0;

    /* A: inizializzazione */
    scelta = 55;

    do {

        /* per prima cosa:
           ti chiedo di indovinare il numero */
        printf("Che numero ho pensato? ");
        scanf("%d", &guess);
        n_tentativi++;

        /* qui: in cui ho sovrascritto guess
           ma non ancora prev_guess
           avrò a disposizione entrambi per il confronto
           - io ho in guess il tentativo corrente
           - in prev_guess il tentativo precedente */

        /* printf("Il guess corrente e': %d\n", guess); */
        if(prev_guess != -1 && guess!= scelta) {
            /* se non sono nel caso iniziale */
            /* printf("Il guess precedente era: %d\n", prev_guess); */

            /* distanza al tentativo corrente */ /* dist. al tent. prec. */
            if( abs(scelta-guess) > abs(scelta-prev_guess) ) {
                printf("Ti stai allontanando dal numero da indovinare.\n");
            } else {
                printf("Ti stai avvicinando al numero da indovinare.\n");
            }
        }

        /* dopo che guess è stato scritto
           lo "memorizzo" in una variabile di supporto */
        prev_guess = guess;

            /* non ha indovinato */ /* ha fatto meno di 10 tentativi */
    }while( guess != scelta    &&    n_tentativi<5);


    /* posso uscire dal ciclo per due motivi */
    /* devo mettere un test */
    if(guess==scelta) {
        /* sono uscito perchè hai indovinato */
        printf("Bravo! Hai indovinato con %d tentativi.\n", n_tentativi);
    } else {
        /* sono uscito perchè hai finito i tentativi */
        printf("Ti e' andata male! Il numero da indovinare era: %d\n", scelta);
    }

    /* NOTA: c'è il caso particolare in cui esco dal do_while
       perchè ho indovinato all'ultimo tentativo,
       in questo caso tutte e due le condizioni sono false,
       ma testando prima (guess==scelta) visualizzo il messaggio corretto
    */


    return 0;
}

