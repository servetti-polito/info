#include <stdio.h>
#include <stdlib.h>

#define VERO    1
#define FALSO   0

/* AS 15.04.2013
   ciclo definito: controllato da contatore
   - lo trasformo in un FOR */

int main()
{
    int contatore;

    /* contatore mi conta il numero di giri */
    /* se sono arrivato a TOT giri mi fa uscire */

         /* A: inizializzazione */
    for( contatore = 0;
         /* C: condizione */
         contatore < 10;
         /* D: aggiornamento */
         contatore+=2
         ) {

        /* B: blocco di codice (istruzioni) da ripetere */
        printf("[%d] Hello Politecnico di Torino!\n",
               contatore);


        /* contatore viene 'incrementato' ad ogni giro */

    }

    return 0;
}
