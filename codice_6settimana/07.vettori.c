#include <stdio.h>
#include <stdlib.h>

/* AS 18.04.2013
   - Introduzione ai vettori
*/

#define N   10

int main()
{
    int a;
    int i;
    int somma = 0;
                  /* inizializzazione */
    int dato[N] = {  1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    /*          = { 0 }; mette tutto a 0 */

    /*
        dato    | | | | | | | | | | |
        indice   0 1 2 3 4 5 6 7 8 9

        elemento i-esimo e' dato[i]
    */

    /* stampare il secondo elemento
       questo ha indice 1 */

    a = dato[1]; /* per me e' una variabile intera */
    printf("l'elemento in posizione 1 vale %d\n", a);

    /* modifica di un elemento nel vettore */
    dato[1] = 22;
    printf("l'elemento in posizione 1 vale %d\n", dato[1]);

    for(i=0;i<N;i++) {  /* per tutti gli indici del vettore */
        /* assegna un valore */
        scanf("%d", &(dato[i]));
        somma += dato[i];   /* accumulare */
        printf("scrivo in dato[%d].\n", i);
    }
    printf("somma: %d\n", somma);

    somma = 0;
    for(i=1;i<=N;i++) {  /* per tutti gli indici del vettore */
        printf("l'elemento in posizione %d vale %d\n", i-1, dato[i-1]);
        somma += dato[i-1];
    }
    printf("somma: %d\n", somma);

    /* NON POTETE FARE !!!!!
       dato + dato
       dato * dato
       dato = dato (dipende)
     */

    return 0;
}
