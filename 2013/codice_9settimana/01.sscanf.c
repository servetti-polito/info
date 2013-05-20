#include <stdio.h>
#include <stdlib.h>

/* AS 13.05.2013
   - Utilizzo di sscanf ed sprintf per lettura e scrittura di stringhe
   - Lettura di una data formattata gg/mm/aaaa e scrittura in altro formato */

#define LMAX 1000

int main()
{
    /* stringa */
    char str[LMAX];

    /* data e' espressa come gg/mm/aaaa */
    char data[] = "13/05/2013";
    int gg, mm, aaaa;

    /* come faccio a interpretare questa stringa
       come data e ricavare gg, mm, aaaa ? */

    /* scanf: leggi dalla stringa passata
              come primo parametro */

    sscanf(data, "%d/%d/%d", &gg, &mm, &aaaa);

    /* !!!! str deve essere grande a sufficienza !!! */
    sprintf(str, "%d.%d.%d", gg, mm, aaaa);

    puts(str);


    return 0;
}
