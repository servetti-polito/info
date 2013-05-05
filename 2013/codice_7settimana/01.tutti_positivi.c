#include <stdio.h>
#include <stdlib.h>

/* AS 22.04.2013
   - Verificare sequenza tutti numeri positivi
   - Universalita': ogni val inserito e' positivo
     - inizializzo flag a VERO
     - scorro tutti i val
       - se uno dei val NON e' positivo
         - pongo flag a FALSO
     - al termine se flag e' VERO
       - l'universalita' (tuutti val positivi) e' vera
     - altrimenti
       - l'universalita' e' negata
*/

#define VERO    1
#define FALSO   0

int main()
{
    float val;        /* variabile */

    /* sentinella / flag
       - che ci dice se continuare il ciclo o no */
    int continua;

    /* inizializzazione */
    continua = VERO ;

    while( continua /* <condizione> */ ) {

        printf("Inserisci un valore: ");
        scanf("%f", &val);
        printf("Hai inserito: %f.\n", val);

        /* aggiornamento della condizione */
        if(val < 0) {
            printf("Hai inserito un numero negativo.\n");
            continua = FALSO;
        }
    }

    return 0;
}
