#ifndef __SELECTIONSORT
#define __SELECTIONSORT

void selectionSort(int* L, int tam){
    int min, bck, i, j;
    for(i=0;i<tam-1;i++){
        min = i;
        for(j=i+1;j<tam;j++){
            if(L[j]<L[min]) min = j;
        }
        /*Swap--------*/
        bck = L[i];
        L[i] = L[min];
        L[min] = bck;
        /*------------*/
    }
    return;
}

#endif
