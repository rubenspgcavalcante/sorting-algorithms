#ifndef __RADIXSORT
#define __RADIXSORT
#include <stdlib.h>

void radixSort(int *L, int tam){
    int d = 10; //Número de algarismos dos decimais
    int i, j, k=maiorElemento(L,tam);
    int *c, *aux, mult;
    c = (int *) malloc(k*sizeof(int));
    aux = (int *) malloc(tam * sizeof(int));
    mult=1;
    
    for(j=0; j<d; j++){

        for(i=0; i<=k; i++)
            c[i]=0;

        for(i=0; i<tam; i++)
            c[L[i] % (10 * mult)]++;


        for(i=1; i<=k; i++)
            c[i] = c[i] + c[i-1];

        for(i=tam-1; i>=0; i--){
            aux[c[L[i]%(10*mult)]-1] = L[i];
            c[L[i]%(10*mult)]--;
        }

        for(i=0; i<tam; i++){
            L[i] = aux[i];
        }
        mult *= 10;
    }

    return;
}

#endif