#include <stdio.h>
#include <stdlib.h>

#define N 5

int ricerca(int vett[], int len, int v, int flag[]) {
       int n = -1;
       int i;
       for(i=0;i<len ;i++) {
         if(flag[i] == 0 & vett[i] == v) {
            n = i;
            return n;
         }
       }
       return n /*-1*/;
}

int main()
{
    int v1[N] = { 12,  3, 12, 13, 29 };
    int v2[N] = { 12, 29, 12,  3, 13 };
    int uguali = 1;
    int i, pos;

    int trovato[N] = { 0 };

    for(i=0;i<N;i++) {
        pos = ricerca(v2,N,v1[i],trovato);
        if(pos>=0) { trovato[pos] = 1; }
        else { uguali = 0; break; }
    }

    if(uguali) { printf("uguali\n"); }
    else { printf("diversi"); }

    return 0;
}
