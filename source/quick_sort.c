#ifndef __QUICKSORT
#define __QUICKSORT

int particao(int *L, int inicio, int fim, int opt) {
    int pivo,i,j,aux;
    if(opt==0){
        pivo = rand()%(fim-inicio) + inicio;
        aux = L[pivo];
        L[pivo] = L[inicio];
        L[inicio] = aux;
    }
    pivo = L[inicio];
    i = inicio + 1;
    j = fim;
    while(i <= j) {
        while(i <= j && L[i] <= pivo){
            i++;
        }
        while(i<= j && L[j] > pivo){
            j--;
        }
        if(i<=j) {
            //Swap-------------
            aux = L[i];
            L[i] = L[j];
            L[j] = aux;
            //-----------------
            i++;
            j--;
        }
    }
    //Swap-------------
    aux = L[inicio];
    L[inicio] = L[j];
    L[j] = aux;
    //-----------------
    return j;
}

void quickSort(int *L, int inicio, int fim, int opt) {
    int j;
    if(inicio < fim) {
        j = particao(L,inicio,fim,opt);
        if(inicio < j-1)
            quickSort(L,inicio,j-1,opt);
        if(j+1 < fim)
            quickSort(L,j+1,fim,opt);
    }
}

#endif