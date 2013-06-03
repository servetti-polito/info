#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* AS 30.05.2013
   # Lettura da file riga per riga - come da TDE 4.2.2013
     - Scrivo il formato della fscanf per leggere una riga intera
     - Definisco le variabili corrispondenti per ogni valore letto
     - Raggruppo le variabili in una struct
     - Creo un vettore di struct per memorizzare tutto il contenuto del file (riga per riga)
 */

#define MAXLEN 17
#define DATALEN 10

#define N 20

struct isbn_db {
    char isbn[MAXLEN+1];
    char av;
    char data[DATALEN+1];
    int ncopie;
    float prezzo;
};

int main(int argc, char *argv[])
{
    FILE *fp;
    char tmp_isbn[MAXLEN+1], tmp_data[DATALEN+1];
    char tmp_av;
    int tmp_ncopie;
    float tmp_prezzo;

    /* 0: [ isbn, av, data, ncopie, prezzo ]
       1: [ isbn, av, data, ncopie, prezzo ]
       2: [ isbn, av, data, ncopie, prezzo ]
       ....................
     N-1: [ isbn, av, data, ncopie, prezzo ]
    */
    struct isbn_db vett[N];

    int i; int cnt;

    if(argc != 2) {
        printf("Manca il nome del file.\n");
        exit(1);
    }

    fp = fopen(argv[1], "r");
    if(fp == NULL) {
        printf("File non trovato!\n");
        exit(1);
    }


    i = 0;

    /**
        # Lettura da file riga per riga
        - il formato della riga contiene un numero fisso e noto di campi
        - tutte le righe hanno lo stesso formato
    **/

    /* leggo la prima riga */
    fscanf(fp, "%s %c %s %d %f",
           tmp_isbn, &tmp_av, tmp_data, &tmp_ncopie, &tmp_prezzo);

    /* finchè non sono arrivato alla fine del file
       cioè la fscanf ha letto qualcosa */
    while(!feof(fp)) {

        /* fai qualcosa */
        printf("%d: %s %c %s %d %f\n", i,
            tmp_isbn, tmp_av, tmp_data, tmp_ncopie, tmp_prezzo);

        /* copia i dati nella cella i-esima del vettore vett */
        strcpy(vett[i].isbn,tmp_isbn);      /* char [] */
        vett[i].av         =  tmp_av;        /* char */
        strcpy(vett[i].data,tmp_data);      /* char [] */
        vett[i].ncopie     =  tmp_ncopie;    /* int */
        vett[i].prezzo     =  tmp_prezzo;    /* float */

        i++;

        /* leggo la riga per il prossimo ciclo while */
        fscanf(fp, "%s %c %s %d %f",
            tmp_isbn, &tmp_av, tmp_data, &tmp_ncopie, &tmp_prezzo);
    }

    printf("--------------------------\n");
    /* stampiamo tutto al contrario */
    cnt = i;    /* mi dice quante righe ho riempito*/
    for(i=cnt-1;i>=0;i--) {
        /* i valori li leggo da vett[i].<qualcosa> */
        printf("%d: %s %c %s %d %f\n", i,
            vett[i].isbn, vett[i].av, vett[i].data,
            vett[i].ncopie, vett[i].prezzo);
    }

    fclose(fp);

    return 0;
}
