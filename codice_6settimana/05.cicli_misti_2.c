#include <stdio.h>
#include <stdlib.h>

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
    int i;

    /* A: inizializzazione */
    scelta = 55;

    printf("Che numero ho pensato? ");
    scanf("%d", &guess);

    /* finche' guess e' diverso da scelta
       (cioè non hai indovinato)
    */

          /* C: condizione */
          /* !(scelta==guess) */
    /* while(  scelta != guess      ) { */
    for(i=0; i<(5-1) && scelta!=guess ;i++) {

        /* B: qualcosa - l'indizio */
        if(guess < scelta) {
            printf("Prova un numero più grande.\n");
        } else if(guess!=scelta){
            printf("Prova un numero più piccolo.\n");
        }

        /* D: aggiornamento */
        printf("Che numero ho pensato? ");
        scanf("%d", &guess);

#if 0
        /* NOTA: si può scrivere anche con un break,
           ma si salta l'incremento i++ alla fine del ciclo
        */
        if(scelta == guess) {
            /* se ha indovinato, smetti di ciclare */
            break;
            /* esco dal ciclo,
            ma salto anche le istruzioni successive (che sono dentro al ciclo)
            */
        }
#endif

        /* i++ */
    }

    /* posso uscire dal ciclo per due motivi */
    /* devo mettere un test */
    if(guess==scelta) {
        /* sono uscito perchè hai indovinato */
        printf("Bravo! Hai indovinato con %d tentativi.\n", i+1);
    } else {
        /* sono uscito perchè hai finito i tentativi */
        printf("Ti e' andata male! Il numero da indovinare era: %d\n", scelta);
    }

    return 0;
}
