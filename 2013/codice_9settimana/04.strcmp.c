#include <stdio.h>
#include <stdlib.h>

/* AS 16.05.2013
   strcmp: confronta due stringhe
      OUT -> 0 se le due stringhe sono uguali */

#define LEN 1000

int main()
{
    char str1[LEN+1], str2[LEN+1];
    int result;

    /* scanf("%s %s", str1, str2); */ /* leggo due "parole" */
    gets(str1); /* leggo una intera linea in str1 */
    gets(str2);

    puts(str1); puts(str2); /* stampo */

    result = strcmp(str1,str2);
    printf("result: %d\n", result);

    if(result == 0) {
        printf("le due stringhe sono uguali\n");
    } else {
        /* se sono diverse */

        printf("le due stringhe sono diverse\n");
        /* stamparle in ordine alfabetico */
        if(result>0) {
                printf("%s - %s", str2, str1);
        } else {
                printf("%s - %s", str1, str2);
        }
    }

    return 0;
}
