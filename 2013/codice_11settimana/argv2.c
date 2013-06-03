#include <stdio.h>
#include <stdlib.h>

#define N 100

/* AS 30.05.2013
   # Ripasso su argv (stampa il suo contenuto)
     - Inserire valori di argv tramite CodeBlocks, menu Project->Set_program's_arguments
   # Ripasso strcmp e strncmp
*/

int main(int argc, char *argv[])
{

    /* stampo il contenuto di argv che contiene argc stringhe */
    /*
    int i;
    for(i=0;i<argc;i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    */

    /* Date alcune stringhe */
    char s1[N] = "portobello";
    char s2[N] = "porto";
    char s3[N] = "bello";

    int res1,res2;

    /* s1 ed s2 sono diverse */
    res1 = strcmp(s1,s2);
    /* ma se mi limito a controllare i primi 5 caratteri tramite strncmp
       sono uguali */
    res2 = strncmp(s1,s2,5);

    printf("%d %d\n", res1, res2);


    /**
       voglio confrontare s2 ed s1 (a partire dalla posizione 5)
    **/

    printf("%c\n", s1[5]);       /* s1[5] e' il carattere in posizione 5 di s1, cioè 'b' */
    printf("%s\n", &(s1[5]));    /* & il carattere "diventa" una stringa */

    /* confronto s1 ".....bello" con s2 "bello" */
    /*                    ^  */
    /*               012345 */
    res2 = strncmp(&(s1[5]),s2,5);

    printf("%d %d\n", res1, res2);

    return 0;
}
