#include <stdio.h>
#include <stdlib.h>

/* AS 22.04.2013
   - Verificare sequenza tutti numeri positivi (letta da vettore)
   - Universalita': ogni val letto e' positivo
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

#define N 6

int main()
{
    float vett[N] = { 3.14, 45, 1.25 , -1.5, 98, 7};
    int i;  /* contatore */
    float val;        /* variabile */

    /* flag
       - che ci dice se sono tutti positivi o no */
    int tutti_positivi;

    /* (
       i = 0;
       a = i++; ======> a = i; i = i + 1; => a = 0;
         oppure
       a = ++i; ======> i = i + 1; a = i; => a = 1;
       )
    */

    /* inizializzazione */
    tutti_positivi = VERO;

    for(i=0; i<N; i++) {    /* scorre il vettore */

        val = vett[i]; /* i-esimo elemento del ciclo */
        printf("Ho letto: %f.\n", val);

        /* aggiornamento della condizione */
        if(val < 0) {
            /* Non tutti gli elementi del vettore sono positivi */
            printf("Ho letto un numero negativo!\n");
            tutti_positivi = FALSO;
            break;
        }

        /* i++; */
    }

    if(tutti_positivi) {
        printf("Tutti gli elementi del vettore sono positivi.");
    } else {
        printf("Non tutti gli elementi del vettore sono positivi.\n");
        printf("Perche' l'elemento in posizione %d, vale %f ed e' negativo;",
           i, vett[i]);
    }

    return 0;
}
