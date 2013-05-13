#include <stdio.h>
#include <stdlib.h>

#define N 9

int main()
{
    int v[N] = { 2, 7, 13, 2, 4, 6, 7, 10, 4};
    int i, j;
    int min_v, min_i, tmp;

    for(i=0;i<N;i++) {

        /* scambio v[i] con il minimo
           tra v[i+1] e v[N-1] */

        /* min_i <= posizione di quel minimo */
        min_v = v[i];
        min_i = i;
        for(j=i; j<N; j++) {
            if(v[j]<min_v) {
                min_v = v[j];
                min_i = j;
            }
        }

        /* scambio i con min_i */
        tmp = v[i];
        v[i] = v[min_i];
        v[min_i] = tmp;

    }

    for(i=0;i<N;i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
