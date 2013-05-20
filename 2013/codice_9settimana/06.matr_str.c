#include <stdio.h>
#include <stdlib.h>

/* AS 17.05.2013
   Matrice di caratteri visti come stringhe (una per riga) 
   - leggo le righe dell'input (con la gets)
   - le salvo nelle righe della matrice di caratteri
   - ogni riga è una stringa e la stampo con il %s

   Posso re-indirizzare il contenuto di un file di testo
   verso l'input del mio programma utilizzando la linea di comando:
   - menu avvio -> esegui -> cmd
   - cd <cartella_con_il_programma_exe>
   - matr_str.exe < file.txt
*/

#define NR 3
#define NC (1000+1) /* lunghezza della stringa */

int main()
{
    char m[NR][NC];
    int i;

    for(i=0;i<NR;i++) { /* per ogni riga */
        /* m[i] e' la stringa
           corrispondente alla riga i-esima
           della matrice */
        gets(m[i]);
    }

    for(i=0;i<NR;i++) { /* per ogni riga */
        printf("%02d: %s\n", i, m[i]);
    }

    return 0;
}
