#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* AS 17.05.2013
   Matrice di caratteri visti come stringhe (una per riga) 
   - leggo le righe dell'input (con la gets)
   - le salvo nelle righe della matrice di caratteri
   - ogni riga è una stringa e la stampo con il %s

   **** leggo solo fino alla fine dell'input / o alla fine della matrice *****

   Posso re-indirizzare il contenuto di un file di testo
   verso l'input del mio programma utilizzando la linea di comando:
   - menu avvio -> esegui -> cmd
   - cd <cartella_con_il_programma_exe>
   - matr_str.exe < file.txt
*/

#define NR 10
#define NC (1000+1) /* lunghezza della stringa */

int main()
{
    char m[NR][NC];
    int i;
    int cnt; /* numero di righe lette */
    char line[NC];  /* per memorizzare una riga */

    i = 0;
    /* finche' c'è qualcosa da leggere */
    while( gets(line) != NULL && i<NR) { /* la riga corrente e' diversa da NULL */

        /* lo metti nella matrice */
        strcpy( m[i] , line);    /* m[] <- line */
        /* nella riga i-esima */
        /* e conti quante righe hai riempito */

        i++;
    }
    /* i: rappresenta il numero di righe scritte */
    cnt = i;

    /* per ogni riga che hai riempito */
    for(i=cnt-1;i>=0;i--) {
        /* stampala*/
        printf("%02d: %s\n", i, m[i]);
    }


    return 0;
}
