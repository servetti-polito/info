#include <stdio.h>
#include <stdlib.h>

/* AS 29.04.2013
   1. Ricerca di un elemento in un vettore
   2. Funzione che ritorna un valore
*/

#define N 10

/* definizione
   - aggiungiamo il tipo di dati su cui lavorera' */
/* chiamata della funzione:
pos = ricerca(  vett,        N,       v); */
int ricerca(int vett[], int len, int v) {
    /* int vett[]: vettore
       int len: lunghezza del vettore
       int v: valore da cercare */
       int n = -1; /* posizione di v nel vettore
                      inizializzata a -1 xche' devo ancora trovarlo */

       int i;
       for(i=0;i<len ;i++) {
         if(vett[i] == v) {
            /* trovato */
            n = i;
            /* break; */ return n;
         }
       }

       /* per ritornare al chiamante un valore */
       /* ritorna l'ultima posizione del valore da cercare */
       return n /*-1*/;
}

int main()
{
    int vett[N] = { 0, 1, 2, 3, 4, 5, 6, 4, 8, 9};
    int v;
    int pos; /* posizione elemento nel vettore */

    printf("Quale valore devo cercare? ");
    scanf("%d", &v);


    /* ricerca */
    /* argomenti funzione:
       - vett: il vettore
       - N: la lunghezza del vettore
       - v: il valore da cercare
       valore di ritorno della funzione:
       - la posizione del valore nel vettore
       - o -1 se non e' stato trovato
    */
    pos = ricerca(vett, N, v);

    if(pos>=0 && pos<N) {
        printf("L'elemento %d cercato si trova in posizione %d.\n",
               v, pos);
    } else {
        printf("L'elemento %d non e' presente nel vettore.\n", v);
    }

    return 0;
}
