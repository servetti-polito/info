#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* AS 17.05.2013
     Utilizzo dei parametri da linea di comando => come argomenti del main (argc, argv)
     - eseguire il programma da linea di comando come (ad esempio):
       > argv M "ciao mondo"
 */

int main(int argc, char* argv[])
{
    int i, j, len;
    char scelta;

    /* printf("Vuoi stampare in (M)aiuscolo o (m)inuscolo? ");
    scanf("%c", &scelta);
    */ /* M / m */

    printf("argc: %d\n", argc);
    if(argc>=2) {
        scelta = argv[1][0];   /* sbagliato ! */
    }

    if(scelta=='M') {
        printf("Hai scelto Maiuscolo!\n");
    } else {
        printf("Hai scelto minuscolo!\n");
    }

    /* partiamo da 1 (saltiamo il nome del programma) */
    for(i=2;i<argc;i++) {
        /* puts(argv[i]); */
        len = strlen(argv[i]);  /* lunghezza della stringa */
        for(j=0;j<len;j++) {
            switch (scelta) {
            case 'M':
                putchar(toupper(argv[i][j]));
                break;
            case 'm':
                putchar(tolower(argv[i][j]));
                break;
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
