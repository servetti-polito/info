#include <stdio.h>
#include <stdlib.h>

/* AS 30.05.2013
   # Lettura da file "modello matrice" - come da TDE 19.11.2011
*/

/* Posso utilizzare una COSTANTE per "memorizzare" il nome del file */
#define NOMEFILE "mappa.dat"

#define N 4

int main()
{
    FILE *fp;
    int mappa[N][N];
    int i,j;

    fp = fopen(NOMEFILE,"r");
/*    fp = fopen("mappa.dat","r"); */
    if(fp==NULL) {exit(1);}

    /* il file esiste e posso leggerlo */

    /* Lettura di NxN valori "%d" da file
       - La lettura da file è sequenziale, un valore dopo l'altro
       - Ma il for per righe e per colonne mi aiuta a sistemare i valori
         correttamente nella matrice
       - Provare a cambiare il valore di N senza cambiare il contenuto del file,
         cosa succede?
    */
    for(i=0;i<N;i++) {
        for (j=0;j<N;j++) {
            fscanf(fp,"%d",&mappa[i][j]);
        }
    }

    for(i=0;i<N;i++) {
        for (j=0;j<N;j++) {
            printf("%d ",mappa[i][j]);
        }
        printf("\n");
    }


#if 0
    /* Lettura riga per riga con fscanf (formato fisso)
       - scomoda se cambia la dimensione della matrice da leggere
         - devo modificare il formato della fscanf
    */
    fscanf("%d %d %d %d",   &mappa[0][0],
                            &mappa[0][1],
                            &mappa[0][2],
                            &mappa[0][3]);
    i = 1;
    while(!feof(fp)) {
        fscanf("%d %d %d %d",   &mappa[i][0],
                                &mappa[i][1],
                                &mappa[i][2],
                                &mappa[i][3]);
        i++;
    }
#endif

    fclose(fp);

    return 0;
}
