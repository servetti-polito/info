#include <stdio.h>
#include <stdlib.h>

/* AS 30.5.2013
   # Ripasso su gets e scanf
*/

int main()
{
    int val;
    char str[100];

    printf("Scegli dal menu un numero.\n");
    scanf("%d", &val);
    /* scarta tutti i caratteri ancora da processare
       da dove? in questo caso da "stdin" -> standard input */
/*    fflush(stdin); */

    printf("Introduci un nome\n");
    /* gets(str); */    /* gets, letto il primo \n ritorna */
    scanf("%s", str);   /* scanf, scarta i caratteri di spaziatura (anche \n) finchè non trova una stringa */
    printf("/%s/\n",str);


    return 0;
}
