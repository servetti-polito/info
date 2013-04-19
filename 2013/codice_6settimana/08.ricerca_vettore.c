#include <stdio.h>
#include <stdlib.h>

/* AS 18.4.2013
   Ricerca di un valore in un vettore
*/

#define N 10
#define FALSE 0
#define TRUE  1

#define V 99    /* valore da cercare */

int main()
{
    int vett[N] = { 76, 55, 44, 22, 34, 78, 98, 100, 99, 2};
    int i;

    /* Inizialmente la sentinella/flag
       e' settata a FALSE perche' l'elemento da cercare non e' ancora stato trovato */
    int trovato = FALSE;

    for(i=0; i<N; i++) {  /* per ogni elemento del vettore */
       /* controllo se e' quello che cerco */
       if(vett[i] == V) {
           printf("L'elemento %d e' uguale al valore cercato %d.\n",
                  vett[i], V);
           trovato = TRUE; printf("Setto trovato a TRUE\n");
       } else {
           printf("L'elemento %d non e' uguale al valore cercato %d.\n",
                  vett[i], V);
           /* NO! trovato = FALSE; printf("Setto trovato a FALSE\n");
              e' sbagliato impostare 'trovato' a FALSE in questo punto
              perchè rischia di sovrascrivere 'trovato = TRUE'
              */
       }
    }

    if(trovato) {
        printf("Il valore %d cercato e' stato trovato.", V);
    } else {
        printf("Il valore %d cercato non e' stato trovato.", V);
    }

    /* Nota: il codice si puo' (deve) modificare per fare si' che appena
       si e' trovato il valore cercato, si esca dal ciclo for
       (utilizzando un ciclo misto con contatore e sentinella)
       */

    return 0;
}
