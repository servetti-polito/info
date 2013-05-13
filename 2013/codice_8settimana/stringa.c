#include <stdio.h>
#include <stdlib.h>

#define CMAX    100

int main()
{
    /* vettore di caratteri */
    char str[CMAX+1] = "ciao";   /* il +1 per il '\0' */

    /* leggere una stringa da tastiera */
    /* uso il %s della scanf
       specifico il nome della stringa (senza &) */

    char nome[CMAX+1], cognome[CMAX+1];
    printf("Scrivi il tuo nome e cognome.\n");
    scanf("%s %s", nome, cognome);

/*
    str[0] = 'c';
    str[1] = '\0'; */ /* metto il terminatore */

    /* come si stampa un vettore di caratteri
       se voglio leggerlo come stringa ? */
    /* uso il segnaposto %s */

    printf("%s - %s", nome, cognome);

    return 0;
}
