#include <stdio.h>
#include <stdlib.h>

/* AS 24.04.2013
   Calcola la media tra due valori
   e ne restituisce il valore
*/

int p = 5;
/* dichiarata fuori dalle funzioni
    ed e' una variabile 'globale' */

float media(float a, float b) {
    /* float a; float b; */
    float m = (a+b)/2.0;

    printf("La media tra a:%f e b:%f vale: %f\n",
           a, b, m);

    /*printf("p:%d.\n", p);*/

    a = 10;

    return m;
}

int main()
{
    float a = 1.0, b = 2.0;
    float v;

    /* assegno il valore restituito da media
       alla variabile v */
    v = media(a,b);
    printf("v vale %f\n", v);

    printf("a vale ancora %f.\n", a);

    /*printf("p:%d.\n", p);*/
    return 0;
}
