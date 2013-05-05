#include <stdio.h>
#include <stdlib.h>

/* AS 24.04.2013
   - Riempimento 'condizionale' di un vettore
     - Quando il contatore del ciclo viene incrementato in funzione
       di una condizione, meglio usare un while che un for
       (e' piu' comodo e facile da scrivere)
*/

#define N 10

int main()
{
    /*  pos   0 1 2 3 4 5 6 7 8 9
        vett | | | | | | | | | | |
        i-----^
vett[i] = tmp
              3
        i-------^ (i++)
    */
    int vett[N] = {0};
    int i;  /* indice/contatore */ int j;
    int tmp;

    i = 0;
    while(i<N) {
        /* ... */
        printf("> ");
        scanf("%d", &tmp);    /* uno dopo l'altro */

        /* il valore viene prima scritto in una variabile temporanea
           poi controllato ed, eventualmente, scritto nel vettore */
        if(tmp%2) {
            vett[i] = tmp;
            i++;        /* il contatore, i, non incrementa ad ogni ciclo
                           ma solo quando e' verificata una determinata
                           condizione (scritta dentro l'if tmp%2) */
        }

        /* stampa il vettore */
        for(j=0;j<N;j++) {
            printf("%d | ", vett[j]);
        } printf("\n");

    }

    return 0;
}
