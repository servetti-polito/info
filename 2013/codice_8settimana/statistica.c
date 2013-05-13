#include <stdio.h>
#include <stdlib.h>

/* calcolare la statistica
   delle frequenze di alcuni valori in un vettore
   - tramite vettore di contatori "dinamico"
*/

#define N   9
#define M   10

int ricerca(int vett[], int len, int v) {
    /* int vett[]: vettore
       int len: lunghezza del vettore (da cercare)
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
    int v[N] = { 2, 7, 13, 2, 4, 6, 7, 10, 4};
    int i;

    int num[M], cnt[M];
    int j; /* posizione del contatore utile */
    int m = 0; /* numero di contatori già creati */
    /* inizializzato a 0 perche' non ho ancora 'etichettato'
       nessun contatore */

    /* per ogni elemento di v */
    for(i=0; i<N; i++) {

        /* cerca se abbiamo già un contatore
           per il valore in v[i] */
        j = ricerca(num, m, v[i]);

        /* j == -1 => etichetta non trovata
           j >=  0 => etichetta trovata in posizione j */

        if(j>=0) {
            /* uso etichetta j */
            /* incremento il contatore corrispondente */
            cnt[j]++;
        } else {
            /* creo nuova etichetta
               in posizione m */
            num[m] = v[i];

            /* inizializzo il contatore
               corrispondente con 1 */
            cnt[m] = 1;

            m++;
        }

    }

    for(j=0;j<m;j++) {
        printf("%d: %d\n", num[j], cnt[j]);
    }








    return 0;
}
