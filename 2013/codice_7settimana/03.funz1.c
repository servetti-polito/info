#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* AS 24.04.2013
   - Funzioni
 */

/* Definizione di una funzione */
int pluto()
{
    printf("Hello Pluto!\n");
    return 0;
}

int pippo(int v)
{
    printf("Hello Pippo %d!\n", v);
    return 0;
}

int main()
{
    printf("Hello Politecnico di Torino!\n");

    pluto();
    pippo(10);    /* invocazione di una funzione */
    pippo(2);
    return 0;
}
