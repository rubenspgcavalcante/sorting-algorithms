#ifndef __INSERTIONSORT
#define __INSERTIONSORT

void insertionSort(int* L, int tam){
    int pivo, j, i;
    for(i=1;i<tam;i++){
        pivo= L[i];
        j = i-1;
        while(j>=0 && L[j]>pivo){
            L[j+1] = L[j];
            j--;
        }
        L[j+1] = pivo;
    }
    return;
}

#endif