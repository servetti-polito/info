#include <stdio.h>
#include <stdlib.h>

/* AS 17.05.2013
   Esercizi con le matrici: scrittura, lettura e somma per colonne
     - leggere dei numeri da tastiera
       e riempire una matrice
     - stampare la matrice
     - somma dei valori per colonne (media)
*/

#define NR 5
#define NC 3

int main()
{
    int i,j;
    int m[NR][NC]; /* int v1, v2, v3; */

    int somme[NC] = {0};  /* totale per colonna */

    /* leggiamo 5 volte 3 interi da tastiera */
    for(i=0;i<NR;i++) { /* 5 volte */
        /* per ogni riga */
        for(j=0;j<NC;j++) { /* prendo 3 valori */
            /* scrivo ciascuno nella sua colonna j */
            /* printf("\n[%d][%d]> ", i, j); */
            scanf("%d", &(m[i][j]));

        }
        /* printf("*"); */
#if 0
        printf("Inserisci 3 numeri: ");
        scanf("%d%d%d",  /* li scriviamo in una riga della matrice */
              &(m[i][0]),   /* &v1 */
              &(m[i][1]),   /* &v2 */
              &(m[i][2])    /* &v3 */
              ); /* 3 valori interi */
#endif
    }

    /* stampa */
    for(i=0;i<NR;i++) { /* scendo di riga in riga */
        for(j=0;j<NC;j++) {
                /* passo di colonna in colonna,
                   ma sulla stessa riga */
            printf("%3d ", m[i][j]);
        }
        /* prima di passare alla riga successiva
           metto un 'a capo' */
        printf("\n");
    }


    for(j=0;j<NC;j++) { /* j passa da 0 a 1 a 2 ... fino a NC */
        for(i=0;i<NR;i++) { /* somma della colonna j-esima */
            somme[j] += m[i][j];
        }
    }

    printf("somme per colonna: ");
    for(j=0;j<NC;j++) {
        printf("%d ", somme[j]);
    }

    return 0;
}






