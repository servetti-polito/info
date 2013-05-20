#include <stdio.h>
#include <stdlib.h>

/* AS 16.05.2013
   utilizzo delle matrici
*/

int main()
{
    int i,j;

    /* matrice di interi */
/*  <tipo> <nome matrice> [<dim1>][<dim2>] … [<dimN>]; */
    int    m              [ 3 ]   [ 5 ] =
                 /* n.righe ^  e    ^ n. colonne */
    /* inizializzazione */
    {
        /* posizioni   0   1   2   3   4    */
    /* riga 0 */    {  1,  2,  3,  4,  5 },
    /* riga 1 */    {  6,  7,  8,  9, 10 },
    /* riga 2 */    { 11, 12, 13, 14, 15 }
    };

    /* ogni riga della matrice e' un vettore */

    m[1][2] = 0;
    printf("el. (r:1,c:2) = %d\n", m[1][2]);

    /* stampare una riga: stampare un vettore */
    /* int v[5]; v => m[1]*/
    for(j=0;j<3;j++)
    {
        for(i=0;i<5;i++){
            printf("%3d ", m[j][i]);
        } printf("\n");
    }

    return 0;
}
